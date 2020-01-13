#include <stdio.h>
int main(){
	int sum=0,i,n1=1,n2=1;
	for(i=1;i<=20;i++){
		if(i<=2){
			printf("1\n");
		}else{
			sum=n1+n2;
			n1=n2;
			n2=sum;
			printf("%d\n",sum);
		}
	}	
	return 0;
} 
