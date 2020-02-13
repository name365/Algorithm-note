/*组合数的计算，三种方法模板*/
#include <stdio.h>
/*通过定义式直接计算*/ 
long long C(long long n,long long m){
	long long i,ans=1;
	for(i=1;i<=n;i++){
		ans=ans*i;
	}
	for(i=1;i<=m;i++){
		ans=ans/i;
	}
	for(i=1;i<=n-m;i++){
		ans=ans/i;
	}
	return ans;
}
/*递推公式计算——1*/
long long res[67][67]={0};
long long C(long long n,long long m){
	if(m==0 || m==n)	return 1;
	if(res[n][m]!=0)	return res[n][m];
	return res[n][m]=C(n-1,m)+C(n-1,m-1);	//赋值给res[n][m]并返回 
} 
/*递推公式计算——2*/
const int n=60;
void calC(){
	int i,j;
	for(i=0;i<=n;i++){
		res[i][0]=res[i][i]=1;	//初始化边界 
	}
	for(i=2;i<=n;i++){
		for(j=0;j<=i/2;j++){
			res[i][j]=res[i-1][j]+res[i-1][j-1];
			res[i][i-j]=res[i][j];	
		}
	} 
} 
/*定义式变形计算*/
long long C(long long n,long long m){
	long long ans=1;
	for(long long i=1;i<=m;i++){
		ans=ans*(n-m+i)/i;	//注意一定要先乘再除 
	}
	return ans; 
} 

int main(){
	
	return 0;
}

