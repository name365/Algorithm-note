#include <stdio.h>
int main(){
	int a,sum=0,i=0,n1=1,n2=1;
	scanf("%d",&a);
	if(a==0)	sum=0;
	if(a<=2)	sum=1;
	else{
		for(i=3;i<=a;i++){
			sum=n1+n2;
			n1=n2;
			n2=sum;
		}
	}
	printf("%d\n",sum);
	return 0;
}
