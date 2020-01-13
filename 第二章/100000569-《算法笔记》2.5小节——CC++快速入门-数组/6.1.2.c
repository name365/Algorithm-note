#include <stdio.h>
int main(){
	int n[10],i,j;
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d\n",n[i]);
	}
	return 0;
} 
