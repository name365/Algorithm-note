#include <stdio.h>
int main(){
	int sum=0,i;
	for(i=1;i<=5;i++){
		if(i%2==1) continue;
		sum=sum+i;
	}
	printf("sum = %d\n",sum);
	return 0;
}
