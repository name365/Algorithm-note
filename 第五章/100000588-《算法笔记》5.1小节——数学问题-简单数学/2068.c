/*2068
思考
	- 这个问题可以描述成任给一个整数 N，
	- 如果N 是奇数，输出0 0，否则如果N 是4 的倍数，输出N / 4 N / 2，
	- 如果N 不是4 的倍数，输出N/4+1 N/2。这是一个一般的计算题，
	- 只要实现相应的判断和输出代码就可以了。
	- 题目中说明了输入整数在一个比较小的范围内，所以只需要考虑整数运算就可以了。 
	- 
*/
#include <stdio.h>
int main(){
	int n,a,i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a%2==1)	printf("0 0\n");
			else if(a%4==0)	printf("%d %d\n",a/4,a/2);
			else	printf("%d %d\n",a/4+1,a/2);
		}
	}
	return 0;
} 
