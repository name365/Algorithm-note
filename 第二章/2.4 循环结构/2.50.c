#include <stdio.h>
int main(){
	int n=1,sum=0;
	do{
		sum=sum+n;
		n++;
	}while(n<=100);
	printf("sum = %d\n",sum);
	return 0;
}
