#include <stdio.h>
int main(){
	int T,n,a,i;
	scanf("%d",&T);
	while(T--){
		int sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a);
			sum=sum+a;
		}
		printf("%d\n",sum);
		if(T>0) printf("\n");
	}
	return 0;
}
