#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,d,r1,r2;
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);		
	printf("r1=%7.2lf\nr2=%7.2lf\n",r1,r2);	
	return 0;
}
