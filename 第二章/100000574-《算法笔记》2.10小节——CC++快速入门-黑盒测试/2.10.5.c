#include <stdio.h>
int main(){
	int n,a[100],i,m;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		int sum=0;
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
