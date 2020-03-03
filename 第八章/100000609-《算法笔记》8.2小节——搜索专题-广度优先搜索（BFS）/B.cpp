/*���� B: DFS or BFS?
˼��
	- ֻ��Ҫ�ж��ܶ��߳������Դ������¡�
	- ѡ����BFS����Ϊ����ʯ������û��һ�����һ�θպñȽ�����BFS��
	- �ܹ��Զ�Ѱ��UΪ��㣬AΪ�յ㣬BFS����ֵ��Ϊ��̲����� 
	- ֻ��Ҫ��֤�����˲����������Ϳ��Ի���ȥ����Ϊ�˲��Ժ�ʯͷ��ȫ������ȥ��
	- ��Ϊ��������������ǲ������أ������߹��ĵ㶼��������һ�顣
*/
#include<iostream>
#include<map>
using namespace std;
 
struct stone {
	int x, y;
}s[100];//�洢ʯͷλ��
 
map<string, int> mp;
int num, dx[9] = { -1,-1,-1,0,0,0,1,1,1 }, dy[9] = { -1,0,1,-1,0,1,-1,0,1 };
bool flag;//�ж��ܷ񵽴����
 
void DFS(int x, int y) {
	if (x == 0 && y == 7) {//DFS���ڣ��������յ�
		flag = true;
		return;
	}
	for (int k = 0; k < num; k++) {//�������λ����ʯͷ
		if (x == s[k].x&&y == s[k].y)
			return;
	}
	for (int i = 0; i < 9; i++) {
		if (x + dx[i] >= 0 && x + dx[i] < 8 && y + dy[i] >= 0 && y + dy[i] < 8) {
			bool ok = false;
			for (int k = 0; k < num; k++) {//���ƶ�����λ����ʯͷ��continue
				if (x + dx[i] == s[k].x&&y + dy[i] == s[k].y)
					ok = true;
			}
			if (ok) continue;
 
			string cf;//�ظ�
			for (int k = 0; k < num; k++) {
				if (s[k].x >= 0 && s[k].x < 8 && s[k].y >= 0 && s[k].y < 8) {
					cf += '0' + k;
					cf += '0' + s[k].x;
					cf += '0' + s[k].y;
				}
			}
			cf += '0' + x + dx[i];
			cf += '0' + y + dy[i];
			if (mp.find(cf) != mp.end()) continue;//��mapȥ��
			else mp[cf]++;
 
			for (int k = 0; k < num; k++) {//ʹʯͷ����һ��
				s[k].x++;
			}
			DFS(x + dx[i], y + dy[i]);
			for (int k = 0; k < num; k++) {//����DFS��һ��״̬
				s[k].x--;
			}
		}
	}
}
int main() {
	int n;
	scanf("%d",&n);
	for (int t = 1; t <= n; t++) {
		char c;
		num = 0, flag = false;
		mp.clear();
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> c;
				if (c == 'S') {
					s[num].x = i;
					s[num++].y = j;
				}
			}
		}
		DFS(7, 0);
		if (flag) printf("Case #%d: Yes\n",t);
		else printf("Case #%d: No\n",t);
	}
	return 0;
}
