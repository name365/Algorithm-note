/*扩展欧几里得算法 */
#include <stdio.h>
int gcd(int a,int b){
	if(b==0)	return a;
	else return gcd(b,a%b);
}
int exgcd(int a,int b,int &x,int &y){	//x和y使用引用
	if(b==0){
		x=1;y=0;
		return a;
	} 
	int g=exgcd(b,a%b);	//递归计算
	int temp=x;	//存放x的值
	x=y;
	y=temp-a/b*y;
	return g; 
}
int main(){
	
	return 0; 
} 
