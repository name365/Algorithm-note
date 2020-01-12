#include <stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<101;i++){
		sum=i+sum;
	}
	printf("%d\n",sum);
	return 0;
}
