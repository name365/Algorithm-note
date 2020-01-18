#include <stdio.h>
int main(){
	int n,i,k;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		int a[110]={0};
		for(i=0;i<n;i++){
			scanf("%d",&k);
			a[k]++; //相同的成绩进行计数累加 
//			printf("a[k]=%d ",a[k]); 
		}
		scanf("%d",&k);
		printf("%d\n",a[k]);
	}
	return 0;
} 
