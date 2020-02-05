/*1126
思考
	- 这是区间贪心的问题
	- 将输入的区间按左端点从大到小排序,最大的左端点一定有相对于其他区间的空余区间,
	- 然后依次比较当前的左端点和待选区间的右端点是否重合 
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
	while(scanf("%d",&n),n!=0){
		for(i=0;i<n;i++){
			scanf("%d %d",&I[i].x,&I[i].y);
		}
		qsort(I,n,sizeof(Inteval),cmp);
		int count=0,lasty=0;
		for(i=0;i<n;i++){
			if(lasty <= I[i].x){
				lasty=I[i].y;
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}


