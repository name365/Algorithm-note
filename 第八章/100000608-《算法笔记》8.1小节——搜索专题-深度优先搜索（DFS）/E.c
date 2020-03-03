/*问题 E: 【递归入门】出栈序列统计
	- 用一个过程采模拟进出栈的过程，可以通过循环加递归来实现回溯：重复这样的过程，
	- 如果可以进栈则进一个元素，如果可以出栈则出一个元素。就这样一个一个地试探下去，当出栈元素个数达到n时就计数一次。
	 
思考
	- 全题大意就是计算n个数的出栈方法 

*/
#include <stdio.h>
int n,sum=0;
void DFS(int push,int pop){	//push:入栈次数 pop:出栈次数
	if(pop>push || pop>n || push>n)	return;
	if(push==pop && push==n){
		sum++;
		return;
	}
	DFS(push+1,pop);
	DFS(push,pop+1);
}
int main(){
	scanf("%d",&n);
	sum=0;
	DFS(0,0);
	printf("%d\n",sum);
	return 0;
}


