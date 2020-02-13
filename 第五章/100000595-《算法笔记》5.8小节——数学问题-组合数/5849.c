/*5849
思考
	- 组合数的数据都是成对（M与N）出现的，每对整数M和N满足0＜m, n≤20，以EOF结束。
	- 与前一题一样，简单题 
*/
#include <stdio.h>
long long fact(long long n,long long m){
	long long i,ans=1;
	for(i=1;i<=m;i++){
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

 
