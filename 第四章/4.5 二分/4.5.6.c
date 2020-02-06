/*���ַ���չ 
	- ����һ��������[L,R]�ϵĵ�������f(x),�󷽳�f(x)=0�ĸ� 
	- 1e-5 ��Ϊ10^-5
*/
#include <stdio.h>
const double eps = 1e-5;
double f(double x){
	return x*x;
} 
double calSqrt(){
	double left=1,right=2,mid; //[left,right] = [1,2]
	while(right - left >eps){
		mid = (left + right) / 2; //ȡleft��right���е�
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
