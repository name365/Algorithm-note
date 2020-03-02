/*问题 F: 算法2-25 有序单链表删除重复元素
	- 输入包括多组测试数据，每组测试数据占一行，第一个为大于等于0的整数n，表示该单链表的长度，
	- 后面跟着n个整数，表示链表的每一个元素。整数之间用空格隔开
	- 针对每组测试数据，输出包括两行，分别是删除前和删除后的链表元素，用空格隔开
	- 如果链表为空，则只输出一行，list is empty
思考
	- 此题与前一题类似，只是增加一个去重的步骤。 
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
		for(i=0;i<n;i++){	//输出原数据 
			printf("%d ",str[i]);
		}
		printf("\n");
		printf("%d ",str[0]);	//输出第一个数 
		for(i=1;i<n;i++){
			if(str[i]==str[i-1])	continue;	//去掉重复元素 
			else printf("%d ",str[i]);
		} 
		printf("\n");
	}
	return 0;
}




 
