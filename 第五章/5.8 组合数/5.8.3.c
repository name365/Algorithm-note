/*计算C(m,n)%P 
*/
#include <stdio.h>
/*递推公式计算——1*/
int res[1010][1010]={0};	//递归 
int C(int n,int m,int p){
	if(m==0 || m==n)	return 1;
	if(res[n][m] != 0)	return res[n][m];
	return res[n][m] = (C(n-1,m)+C(n-1,m-1))%p;	//赋值并返回 
} 
/*递推公式计算——2*/
const int n=60;	//递推 
void calC(){
	int i,j;
	for(i=0;i<=n;i++){
		res[i][0]=res[i][i]=1;	//初始化边界 
	}
	for(i=2;i<=n;i++){
		for(j=0;j<=i/2;j++){
			res[i][j]=(res[i-1][j]+res[i-1][j-1]) % p;
			res[i][i-j]=res[i][j];	
		}
	} 
} 
/*根据定义式计算*/
int prime[maxn];
int C(int n,int m,int p){
	int i,ans=1;
	for(i=0;prime[i]<=n;i++){
		int c=cal(n,prime[i])-cal(m,prime[i])-cal(n-m,prime[i]);
		ans=ans*binaryPow(prime[i],c,p)%p;
	}
	return ans;
} 
/*通过定义式的变形来计算*/
int C(int n,int m,int p){
	int i,ans=1;
	for(i=1;i<=m;i++){
		ans=ans*(n-m+i)%p;
		ans=ans*inverse(i,p)%p;
	}
	return ans;
} 
/*Lucas定理*/
int Lucas(int n,int m){
	if(m==0)	return 1;
	return C(n%p,m%p)*Lucas(n/p,m/p)%p;
}

int main(){
	
	return 0;
}

 
