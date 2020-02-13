/*4826
思考
	- 计算阶乘运算的函数写为fact(n),函数返回值的类型为float
	- 自定义一个函数，调用即可 
*/

#include <stdio.h>
/*定义式变形计算*/
long long fact(long long n,long long m){
	long long ans=1;
	for(long long i=1;i<=m;i++){
		ans=ans*(n-m+i)/i;	//注意一定要先乘再除 
	}
	return ans; 
} 
int main(){
	long long m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int ans=fact(m,n);
		printf("%d\n",ans);
	}
	return 0;
} 
