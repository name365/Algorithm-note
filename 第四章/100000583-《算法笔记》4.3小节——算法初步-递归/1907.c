/*1907
思考
	- 名名每天都吃巧克力，共有 N 块巧克力，20 > N >0,
	- 每天可以吃一块或者两块巧克力。问名名共有多少种不同的吃完巧克力的方案。
	- 现在给定N，请你写程序求出名名吃巧克力的方案数目。
	- 变形的斐波那契数列数列，由非递归实现的分治。 
*/
#include <stdio.h>
int F(int n){
	if(n==1)	return 1;
	else if(n==2)	return 2;
	return F(n-1)+F(n-2);
}
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		printf("%d\n",F(N));
	}	
	return 0;
}
