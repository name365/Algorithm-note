/*最小公倍数
思考
	- 既然是求最小公倍数，则只需在最大公约数 d 的基础上，进行 a*b/d，
	- 但在实际计算中，会有溢出的可能，所以更恰当的 a/d*b，可直接引用模板 
模板一： 
	int gcd(int a,int b){
		if(b==0)	return a;
		else	return gcd(b,a%b);
 	}
模板二：
	int gcd(int a,int b){
		return	!b ? a : gcd(b,a%b);
	}
	- 注意格式 
*/
#include <stdio.h>
int gcd(int a,int b){	//递归写法 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int d=gcd(m,n);
		printf("%d\n",m/d*n);  //求得最小公倍数 
	}
	return 0;
}  
