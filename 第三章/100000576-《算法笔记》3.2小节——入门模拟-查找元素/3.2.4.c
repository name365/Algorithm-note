#include <stdio.h>
int main(){
	int i,n,a[100],m,b[100],j;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(b[i]==a[j]){
					printf("YES\n");
					break;
				}
			}
			if(j==n) printf("NO\n");
		}
	}
	return 0;
}
