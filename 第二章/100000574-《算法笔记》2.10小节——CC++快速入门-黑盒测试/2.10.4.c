#include <stdio.h>
int main(){
	int n,a[100],i;
	while(scanf("%d",&n)!=EOF){
		int sum=0;
		if(n==0)	break;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
