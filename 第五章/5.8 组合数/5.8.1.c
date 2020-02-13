/*计算n!中有多少个质因子*/
#include <stdio.h>
/* O(nlogn)的算法*/
int cal(int n,int p){
	int i,ans=0;
	for(i=2;i<=n;i++){	//遍历2~n 
		int temp=i;
		while(temp%p==0){	//只要temp还是p的倍数 
			ans++;	//p的个数加 1  
			temp/=p;	//temp除以p 
		}
	}
	temp ans;
} 
/*O(logn)的算法*/
int cal(int n,int p){
	int ans=0;
	while(n){
		ans += n/p;
		n /= p;	//相当于分母多乘一个p 
	}
	return ans;
} 
/*递归版本*/
int cal(int n,int p){
	if(n<p)	return 0;
	return n/p+cal(n/p,p);
} 

int main(){
	
	return 0;
}

