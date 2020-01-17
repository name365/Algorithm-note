/*1814 
	- 题目的目的很简单，只要知道最后剩余的数字，至于中间的过程，题目不需要知道；
	- 所以可以把这一排树，看成是全部为0的数组，
	- 当你输入左右边界的时候，数组在边界中的数值全部改变成1，输入结束后，
	- 计算数组中从0到L个数中为0的个数（注意，使用for循环的时候，i是可以取到L的）；
*/
#include <stdio.h>
int main(){
	int L,M,i,ds1,ds2;
	while(scanf("%d %d",&L,&M)!=EOF){
		if(!L&&!M) break; //长度个数都为0，跳出循环 
		int a[10010]={0},sum=0;
		while(M--){
			scanf("%d %d",&ds1,&ds2);
			for(i=ds1;i<=ds2;i++){ //将区间的树移走 
				a[i]=1;
			}
		}
		for(i=0;i<=L;i++){//遍历求树的个数 
			if(!a[i]) sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
