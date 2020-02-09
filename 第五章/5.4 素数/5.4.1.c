/*求解100以内的所有素数 	
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
int prime[101],pNum=0;
bool p[101]={0};
void Find_Prime(){
	int i;
	for(i=1;i<101;i++){
		if(isPrime(i)==true){
			prime[pNum++] = i;
			p[i]=true;
		}
	}
}
int main(){
	Find_Prime();
	int i;
	for(i=0;i<pNum;i++){
		printf("%d ",prime[i]);
	}
	return 0;
} 

