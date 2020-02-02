/*使用递归求解n的阶乘*/ 
#include <stdio.h>
int F(int n){
	if(n==0) return 1; //当到达递归边界F(0)时，返回F(0)=1 
	else return F(n-1)*n; //没有到达递归边界值时，使用递归式继续递归下去 
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
}
