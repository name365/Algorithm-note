/*问题 E: 【递归入门】出栈序列统计
	- 用一个过程采模拟进出栈的过程，可以通过循环加递归来实现回溯：重复这样的过程，
	- 如果可以进栈则进一个元素，如果可以出栈则出一个元素。就这样一个一个地试探下去，当出栈元素个数达到n时就计数一次。
	 
思考
	- 全题大意就是计算n个数的出栈方法 
	- 套用公式：n个数的出栈方法cnt=c（n，2n）/  n+1  ，因为直接用所需的计算量太大，会超范围，
	- 所以对公式进行化简后计算，这个公式得出的一定是个整数，
	- 但是计算的时候是采用分子/分母累乘的方法，所以要设置为double型。 
*/
#include <stdio.h>
double cmp(int n){
	int i;
	double sum=1;
	for(i=2;i<=n;i++)
		sum=sum*(n+i)*1.0/i;
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%.0lf\n",cmp(n));
	return 0;
}


