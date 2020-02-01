#include <stdio.h>
int cmp ( const void *a , const void *b ) 
{ 
  return *(int *)a - *(int *)b; 
} 
int main() {
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int a[100]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,i,sizeof(int),cmp);
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");			
	}
	return 0;	
}
