/*二分法拓展 
	- 给定一个定义在[L,R]上的单调函数f(x),求方程f(x)=0的根 
	- 1e-5 即为10^-5
*/
#include <stdio.h>
const double eps = 1e-5;
double f(double x){
	return x*x;
} 
double calSqrt(){
	double left=1,right=2,mid; //[left,right] = [1,2]
	while(right - left >eps){
		mid = (left + right) / 2; //取left与right的中点
		if(f(mid)>2){ //mid > sqrt(2)
			right = mid;
		} else{
			left = mid;
		}
	} 
	return mid;
}
int main(){
	
	return 0;
}
