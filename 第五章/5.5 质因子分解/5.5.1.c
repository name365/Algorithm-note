/*判断质因子 
*/
#include <stdio.h>
struct factor{
	int x,cnt;	//x为质因子，cnt 为其个数 
}fac[10]; 
if(n%prime[1]==0){	//如果prime[i]是n的因子 
	fac[num].x=prime[i];	//记录该因子
	fac[num].cnt=0;
	while(n%prime[i]==0){	//计算出质因子prime[i]的个数 
		fac[num].cnt++;
		n /=prime[i];
	} 
	num++;	//不同质因子个数加 1  
}

if(n!=1){	//如果无法被根号 n 以内的质因子除尽 
	fac[num].x=n;	//那么一定有一个大于根号n的质因子 
	fac[num++].cnt = 1; 
} 
int main(){
	
	return 0;
} 

 
