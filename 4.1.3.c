#include <stdio.h>
int main(){
	double a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b){
		d=c;b=a;a=d;
	}
	if(b>c){
		d=c;c=b;b=d;
	}
	if(a>b){
		d=b;b=a;a=d;
	}
	printf("%.2lf %.2lf %.2lf\n",a,b,c);
	return 0;
}
