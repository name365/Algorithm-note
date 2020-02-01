/*1925
思考
	- 如果数组中只有一个数，当第一行将其输出后，第二行请输出"-1"。
*/
#include <stdio.h>
int cmp ( const void *a , const void *b ) 
{ 
  return *(int *)a - *(int *)b; 
} 
int main() {
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int a[1000]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,i,sizeof(int),cmp);
		printf("%d\n",a[n-1]);
		if(n==1) printf("-1\n");
		else{
			for(i=0;i<n-1;i++){
				printf("%d ",a[i]);
			}
			printf("\n");	
		} 		
	}
	return 0;	
}
