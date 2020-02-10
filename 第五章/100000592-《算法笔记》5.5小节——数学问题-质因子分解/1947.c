/*1783
思考
	- 求正整数N(N>1)的质因数的个数。相同的质因数需要重复计算。如120=2*2*2*3*5，共有5个质因数。
	- 注意1不是N的质因数；若N为质数，N是N的质因数。(1<N<10^9)。
*/
#include <stdio.h>
#include <math.h>
typedef int bool;
#define false 0
#define true  1
int prime[10010],cnt=0,i,j;	
bool p[10010]={0};//p[10010]存储完数的因子 
void cmp(){	//筛选哪些是质因子 
	for(i=2;i<10010;i++){
		if(p[i]==false){
			prime[cnt++]=i;
			for(j=i;j<10010;j += i){
				p[j]=true;
			}
		}  
	} 
}
int main(){
	int n;
	cmp();	//调用方法
	while(scanf("%d",&n)!=EOF){
		int count=0,sqr=(int)sqrt(1.0*n);	//n的根号
		for(i=0;i<cnt && prime[i] <= sqr;i++){
			if(n%prime[i]==0){	//如果prime[i]是n的因子 
				while(n%prime[i]==0){	//计算出质因子prime[i]的个数 
					count++;
					n /=prime[i];
				}   
			}
			if(n==1)	break;
		}
		if(n!=1){	//这里是判断大于 sqrt(1e9)的数
			count++;
		}
		printf("%d\n",count);
	} 
	return 0;
} 
