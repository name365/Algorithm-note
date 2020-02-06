/*1934

*/
#include <stdio.h>
int main(){
	int  n,i,x[210]={0},m;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
		}
		scanf("%d",&m);
		for(i=0;i<n;i++){
			if(i==m)	printf("%d\n",x[i]);
			else	printf("-1\n");
		}
	}
	return 0;
}
