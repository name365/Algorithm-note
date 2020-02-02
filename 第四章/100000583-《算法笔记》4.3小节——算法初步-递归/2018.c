/*2018
思考
	- 求斐波那契数列的递归函数，输入n值，使用该递归函数，输出题目图形
	- 对应每个样例输出要求的图形.
*/
#include <stdio.h>
int F(int n){
	if(n==0)	return 0;
	else if(n==1) return 1; //递归边界
	return F(n-1)+F(n-2); //递归式 
}
int main(){
	int m,n,i,j;
	while(scanf("%d",&m)!=EOF){ //样例数m
		while(m--){
			scanf("%d",&n); //每行一个整数n
			for(i=1;i<=n;i++){ //输出几行
				for(j=0;j<n-i;j++){ //第 1行有n-1个" " 
					printf("  "); //两个空格，注意格式 
				}
				for(j=0;j<1+(i-1)*2;j++){ //第n行输出1+(n-1)*2个斐波那契数列
					printf("%d ",F(j));
				}
				printf("\n");
			}
		}
	} 
	return 0;
}
 
