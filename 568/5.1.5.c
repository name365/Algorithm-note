#include <stdio.h>
int main(){
	int n=0,sum=0;
	while(n>=0){
		sum=n+sum;
		if(sum>1000){
			break;
		}
		n++;
	}
	printf("%d\n",n);
	return 0;
}
