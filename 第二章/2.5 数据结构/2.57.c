#include <stdio.h>
int main(){
	int a[10],i;
	scanf("%d",&a[0]);
	for(i=1;i<10;i++){
		a[i]=a[i-1]*2;
	}
	for(i=0;i<10;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
