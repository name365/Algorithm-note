/*求解斐波那契数列的第n项*/
#include <stdio.h>
int F(int n){
	if(n==0 || n==1) return 1; //递归边界
	else return F(n-1)+F(n-2); //递归式 
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
} 
