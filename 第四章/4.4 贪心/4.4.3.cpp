/*����N��������(x,y)������ѡ�񾡿��ܶ�Ŀ����䣬ʹ����Щ����������û�н��� 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
struct Inteval{
	int x,y; //���������Ҷ˵� 
}I[110]; 
bool cmp(Inteval a,Inteval b){ //�ַ������� 
	if(a.x != b.x)	return a.x > b.x; //�Ȱ���˵��С�������� 
	else return a.y < b.y; //��˵���ͬ�İ��Ҷ˵��С�������� 
}
int main(){
	int n,i;
	while(scanf("%d",&n),n != 0){
		for(i=0;i<n;i++){
			scanf("%d %d",&I[i].x,&I[i].y);
		}
		sort(I,I+n,cmp); //�������� 
		int ans=1,lastX=I[0].x;
		for(i=1;i<n;i++){
			if(I[i].y <= lastX){ //����������Ҷ˵���lastX��� 
				lastX = I[i].x; //��I[i]��Ϊ��ѡ�е����� 
				ans++; //���ཻ���������1 
			}
		}
		printf("%d\n",ans);
	} 
	return 0;
} 
