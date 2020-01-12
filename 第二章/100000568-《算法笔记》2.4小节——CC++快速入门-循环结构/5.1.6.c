#include <stdio.h>
int main(){
	int i,j,a=1,n=0;
	for(i=1;i<5;i++){
		n++;
		for(j=1;j<6;j++){
			a=j*n;
			printf("%3d",a);	
		}
		printf("\n");
	}
	return 0;
} 
