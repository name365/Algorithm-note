/*问题 E: 算法2-24 单链表反转
	- 输入包括多组测试数据，每组测试数据占一行，第一个为大于等于0的整数n，表示该单链表的长度，
	- 后面跟着n个整数，表示链表的每一个元素。整数之间用空格隔开 。
	- 针对每组测试数据，输出包括两行，分别是反转前和反转后的链表元素，用空格隔开
	- 如果链表为空，则只输出一行，list is empty 
思考
	- 至于用链表，代码有点长用遍历就很ok，虽然时间复杂度达到近50ms
	- 注意边输入边输出，会导致时间复杂度达到70ms，所以，无非就是多两行代码的事	
*/
#include <stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int str[100010];
		if(n==0){
			printf("list is empty\n");
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
		for(i=0;i<n;i++){
			printf("%d ",str[i]);
		}
		printf("\n");
		for(i=n-1;i>=0;i--){
			printf("%d ",str[i]);
		}
		printf("\n");
	}
	return 0;
}



 
