/*问题 B: DFS or BFS?
思考
	- 只需要判断能都走出，所以代码如下。
	- 选用了BFS，因为觉得石块下落没过一层进行一次刚好比较契合BFS。
	- 能够自动寻找U为起点，A为终点，BFS返回值即为最短步数。 
	- 只需要保证走满八步不会死掉就可以活下去，因为八步以后石头会全部掉下去，
	- 因为这题最大的陷阱就是不能判重，所有走过的点都可以再走一遍。
*/
#include<iostream>
#include<map>
using namespace std;
 
struct stone {
	int x, y;
}s[100];//存储石头位置
 
map<string, int> mp;
int num, dx[9] = { -1,-1,-1,0,0,0,1,1,1 }, dy[9] = { -1,0,1,-1,0,1,-1,0,1 };
bool flag;//判断能否到达出口
 
void DFS(int x, int y) {
	if (x == 0 && y == 7) {//DFS出口，若到达终点
		flag = true;
		return;
	}
	for (int k = 0; k < num; k++) {//若到达的位置是石头
		if (x == s[k].x&&y == s[k].y)
			return;
	}
	for (int i = 0; i < 9; i++) {
		if (x + dx[i] >= 0 && x + dx[i] < 8 && y + dy[i] >= 0 && y + dy[i] < 8) {
			bool ok = false;
			for (int k = 0; k < num; k++) {//若移动到的位置有石头则continue
				if (x + dx[i] == s[k].x&&y + dy[i] == s[k].y)
					ok = true;
			}
			if (ok) continue;
 
			string cf;//重复
			for (int k = 0; k < num; k++) {
				if (s[k].x >= 0 && s[k].x < 8 && s[k].y >= 0 && s[k].y < 8) {
					cf += '0' + k;
					cf += '0' + s[k].x;
					cf += '0' + s[k].y;
				}
			}
			cf += '0' + x + dx[i];
			cf += '0' + y + dy[i];
			if (mp.find(cf) != mp.end()) continue;//用map去重
			else mp[cf]++;
 
			for (int k = 0; k < num; k++) {//使石头下落一层
				s[k].x++;
			}
			DFS(x + dx[i], y + dy[i]);
			for (int k = 0; k < num; k++) {//返回DFS上一层状态
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
