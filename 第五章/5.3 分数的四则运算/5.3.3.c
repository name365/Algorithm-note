/*分数的减法 
*/
#include <stdio.h>
int gcd(int a,int b){	//求最大公约数，递归写法 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
typedef struct{	//分数 
	int up,down;	//分子、分母 
}Fraction;
Fraction cmp(Fraction result){	//分数的化简 
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
Fraction minu(Fraction f1,Fraction f2){
	Fraction result;
	result.up = f1.up*f2.down-f2.up*f1.down;	//分数差的分子
	result.down = f1.down * f2.down;	//分数差的分母
	return cmp(result);	//返回结果，注意化简 
}
void pus(Fraction r){
	r=cmp(r);
	if(r.down==1)	printf("%lld",r.up);
	else if(abs(r.up)>r.down){
		printf("%d %d/%d",r.up/r.down,abs(r.up)%r.down,r.down);
	}else{
		printf("%d/%d",r.up,r.down);
	}	
}
int main(){
	Fraction f1,f2;
	while(scanf("%d %d %d %d",&f1.up,&f1.down,&f2.up,&f2.down)!=EOF){
		pus(minu(f1,f2)); 
	}
	return 0;
} 

 
