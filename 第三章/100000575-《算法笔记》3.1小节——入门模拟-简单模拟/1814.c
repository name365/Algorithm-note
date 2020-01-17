/*1814 
	- 题目的目的很简单，只要知道最后剩余的数字，至于中间的过程，题目不需要知道；
	- 所以可以把这一排树，看成是全部为0的数组，
	- 当你输入左右边界的时候，数组在边界中的数值全部改变成1，输入结束后，
	- 计算数组中从0到L个数中为0的个数（注意，使用for循环的时候，i是可以取到L的）；
*/
#include <stdio.h>
int main(){
	int L,M,i,left,right; //sum是树的个数 
	while(scanf("%d %d",&L,&M)!=EOF){
		if(!L && !M) break;
		int a[10001]={0}; //数组必须要定义在主循环内，否则可能会有值被改变；
		while(M--){
			scanf("%d %d",&left,&right);
			for(i=left;i<=right;i++){
				a[i]=1;
			} 
		} 
		int sum=0;
		for(i=0;i<=L;i++){ //此处i可以取到L
			if(!a[i]) sum++;
		}
		printf("%d\n",sum);
	} 
	return 0;
}
