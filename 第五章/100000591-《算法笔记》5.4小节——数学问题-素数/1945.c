/*1945
思考
	- 输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出-1。
	- 输入一个整数n(2<=n<=10000)
	- 筛法求解
*/
#include <stdio.h>
#include <math.h>
typedef int bool;
#define false 0
#define true  1
bool isPrime(int n){	//判断 n 是否为素数 
	if(n<=1)	return false;
	int i,sqr = (int)sqrt(1.0*n);
	for(i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	} 
	return true;	
} 
int prime[10001]={0},pNum;
void Find_Prime(int n){
	int i;
	pNum=0;
	for(i=2;i<n;i++){
		if(isPrime(i)==true && (i%10==1)){
			prime[pNum++] = i;
		}
	}
}
int main(){
	int i,n;
	while(~scanf("%d",&n)){
		Find_Prime(n);
		if(pNum>0){
			for(i=0;i<pNum;i++){
				printf("%d",prime[i]);
				if(i<pNum-1) printf(" ");
			}
		}else	printf("-1");
		printf("\n");
	}
	return 0;
} 
