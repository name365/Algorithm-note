#include <stdio.h>
int main(){
	int n,i,j,a[10][10];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==1){
				printf("%d ",a[1][1]=1);
			}else{
				if(j==1||i==j){
					printf("%d ",a[i][j]=1);
				}else{
					printf("%d ",a[i][j]=a[i-1][j-1]+a[i-1][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
