#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(b>a){
		c=a;a=b;b=c;
		printf("%d %d\n",a,b);		
	}else{
		printf("%d %d\n",a,b);
	}
	
	return 0;
}
