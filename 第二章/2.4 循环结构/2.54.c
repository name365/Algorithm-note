#include <stdio.h>
int main(){
	int n,sum=0,i;
	for(i=1;i<=100;i++){
		sum=sum+i;
		if(sum>=2000) break;
	}
	printf("sum = %d\n",sum);
	return 0;
}
