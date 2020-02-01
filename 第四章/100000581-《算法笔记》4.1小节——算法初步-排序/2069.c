/*2069
思考
	- 每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1<=N<=10000.
	- 接着N行为N个数据的输入，N=0时结束输入。
	- 一组数据按从小到大的顺序依次排列，处在中间位置的一个数（或最中间两个数据的平均数）。
	- 如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）
	- 输出中位数，每一组测试数据输出一行
	- 只需一个自定义排序函数按题意输入输出 
*/
#include <stdio.h>
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
} 
int main(){
	int N,i,str[10010]={0};
	while(scanf("%d",&N)!=EOF){
		if(N==0) break;
		else{
			for(i=0;i<N;i++){
				scanf("%d",&str[i]);
			}
			qsort(str,N,sizeof(str[0]),cmp);
			if(N%2) printf("%d\n",str[N/2]);
			else	printf("%d\n",(str[N/2]+str[N/2-1])/2);
		} 
	} 
	return 0;
} 
