#include <stdio.h>
#include <math.h>
int main(){
	double a=1,pi=0,i=1.0,n=1.0;
	while(fabs(i)>=1e-6){
		pi+=i;
		n=n+2;
		a=-a;
		i=a/n;
	}
	pi=4*pi;
	printf("PI=%.8lf\n",pi);
	return 0;
}
