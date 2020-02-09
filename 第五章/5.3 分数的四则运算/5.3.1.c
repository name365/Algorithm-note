/*分数的表示和化简
*/
#include <stdio.h>
int gcd(int a,int b){	//求最大公约数，递归写法 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
typedef struct{	//分数 
	int up,down;	//分子、分母 
}Fraction;
Fraction cmp(Fraction result){
	if(result.down<0){	//分数为负数，令分子分母都变成相反数 
		result.up = -result.up;
		result.down = -result.down; 
	}
	if(result.up == 0){	//如果分子为0 
		result.down=1;	//令分母为1 
	}
	else{
		int d=gcd(abs(result.up),abs(result.down));	//分子分母的最大公约数
		result.up /= d;	//约去最大公约数 
		result.down /= d;	 
	} 
	return result; 
} 
int main(){
	Fraction str;
	while(scanf("%d %d",&str.up,&str.down)!=EOF){
		printf("%d\n",cmp(str)); 
	}
	return 0;
} 
