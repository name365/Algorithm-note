/*给出N个开区间(x,y)，从中选择尽可能多的开区间，使得这些开区间两两没有交集 
*/ 
#include <stdio.h>
typedef struct{
	int x,y; //开区间左右端点 
}Inteval; 
int cmp(const void *a, const void *b){ 
	Inteval A = *(Inteval*) a;
	Inteval B = *(Inteval*) b; 
	return A.y - B.y; 
}
int main(){
	int n,i;
	Inteval I[110];
	while(scanf("%d",&n),n != 0){
		for(i=0;i<n;i++){
			scanf("%d %d",&I[i].x,&I[i].y);
		}
		qsort(I,n,sizeof(Inteval),cmp); //区间排序 
		int ans=0,lasty=0;
		for(i=0;i<n;i++){
			if(lasty<=I[i].x){ //如果该区间右端点在lastX左边 
				lasty = I[i].y; //以I[i]作为新选中的区间 
				ans++; //不相交区间个数加1 
			}
		}
		printf("%d\n",ans);
	} 
	return 0;
} 
