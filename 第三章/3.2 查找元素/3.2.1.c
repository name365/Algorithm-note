/*codeup 1934
思路：
	- 题目给定了n个互不相同的数，然后需要从中寻找到值为x的数的下标。
	- 因此可以设定一个数组a,用来存放这n个数。
	- 然后遍历数组a，寻找某一个下标i，使得a[i]==x成立。
	- 如果找到，则输出i，并退出查询。
	- 如果当k遍历完之后还没找到x，那么输出-1。 
*/
#include <stdio.h>
int main(){
	int a[210],i,n,x; //存放n个数
	while(scanf("%d",&n) !=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]); //输入n个数 
		}
		scanf("%d",&x); //输入与查询的数
		for(i=0;i<n;i++){ //遍历数组 
			if(a[i]==x){ //如果找到了x 
				printf("%d\n",i); //输出对应的下标
				break; //退出查找 
			}
		}
		if(i==n){ //如果没找到 
			printf("-1\n"); //输出-1 
		} 
	} 
	return 0;
}
