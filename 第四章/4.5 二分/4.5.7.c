/*有一个侧面看上去是半圆的储水装置，该半圆的半径为R，要求往里面注入高度为h的水，
  使其在侧面看去的面积与半圆面积的比例恰好为 r ，现给定 R 和 r ，求高度 h .
*/
#include <stdio.h>
const double PI = acos(-1.0); //PI
const double eps = 1e-5; //精度为 10^-5
double f(double R,double h){
	double alpha = 2*acos(R-h)/R;
	double L=2*sqrt(R*R-(R-h)*(R-h));
	double S1 = alpha*R*R/2-L*(R-h)/2;
	double S2 = PI*R*R/2;
	return S1/S2;
}
double solve(double R,double r){
	double left = 0,right=R,mid;
	while(right-left > eps){
		mid = (left+right)/2;
		if(f(R,mid)>r){
			right=mid;
		}else{
			left=mid;
		}
	}
	return mid;
}
int main(){
	double R,r;
	scanf("%lf %lf",&R,&r);
	printf("%.4lf\n",solve(R,r));
	return 0;
} 
