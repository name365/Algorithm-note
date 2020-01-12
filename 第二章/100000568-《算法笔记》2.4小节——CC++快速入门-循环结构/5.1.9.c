#include <stdio.h>
int main(){
	double x1=2,y1=1;
	double i,x2=3,y2=2;
	double sum=x1/y1+x2/y2;
	for(i=3;i<=20;i++){
		double x3=x1+x2;
		double y3=y1+y2;
		double ele=x3/y3;
		sum+=ele;
		x1=x2;
		y1=y2;
		x2=x3;
		y2=y3;
	}
	printf("%.6lf\n",sum);
	return 0;
}

