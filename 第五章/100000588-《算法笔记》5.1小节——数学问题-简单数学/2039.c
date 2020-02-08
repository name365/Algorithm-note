/*2039
思考
	-  y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),其中y0=x.求给定的x经过n次迭代后立方根的值。
	- double精度,保留小数点后面六位。
	- 就是普通的计算 
*/
#include <stdio.h>
int main(){
	int x,n,i;
	while(scanf("%d %d",&x,&n)!=EOF){
		double sum=x;
		for(i=0;i<n;i++){
			sum=sum*2/3+x/(3*sum*sum);
		}
		printf("%.6lf\n",sum);
	}
	return 0;
} 
