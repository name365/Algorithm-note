#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		d=c;b=a;a=d;
	}
	if(b>c){
		d=c;c=b;b=d;
	}
	if(a>b){
		d=b;b=a;a=d;
	}
	printf("%d\n",c);
	return 0;
}
