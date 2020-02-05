/*给出N个开区间(x,y)，从中选择尽可能多的开区间，使得这些开区间两两没有交集 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
struct Inteval{
	int x,y; //开区间左右端点 
}I[110]; 
bool cmp(Inteval a,Inteval b){ //字符排序函数 
	if(a.x != b.x)	return a.x > b.x; //先按左端点从小到大排序 
	else return a.y < b.y; //左端点相同的按右端点从小到大排序 
}
int main(){
	int n,i;
	while(scanf("%d",&n),n != 0){
		for(i=0;i<n;i++){
			scanf("%d %d",&I[i].x,&I[i].y);
		}
		sort(I,I+n,cmp); //区间排序 
		int ans=1,lastX=I[0].x;
		for(i=1;i<n;i++){
			if(I[i].y <= lastX){ //如果该区间右端点在lastX左边 
				lastX = I[i].x; //以I[i]作为新选中的区间 
				ans++; //不相交区间个数加1 
			}
		}
		printf("%d\n",ans);
	} 
	return 0;
} 
