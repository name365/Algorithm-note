/*1818 
思考
	- 既然是求最大公约数，可直接引用模板 
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
		printf("%d\n",gcd(m,n)); 
	}
	return 0;
} 
