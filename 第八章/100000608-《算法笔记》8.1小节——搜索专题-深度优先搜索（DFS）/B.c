/*问题 B: 【递归入门】组合的输出
	- 从n个元素中抽出r个元素(不分顺序且r < ＝ n)，我们可以简单地将n个元素理解为自然数1，2，…，n，从中任取r个数。 
	- 一行两个自然数n、r ( 1 < n < 21，1 < ＝ r < ＝ n )。
	- 所有的组合，每一个组合占一行且其中的元素按由小到大的顺序排列，所有的组合也按字典顺序。
思考
	- DFS+注释	
*/
#include <stdio.h>
int n,r,w[21];
void DFS(int index,int count){	//从index个元素中抽出count个元素
	int i;
	w[count]=index;	//向w[count]填数
	if(count == r){	//递归边界：
		for(i=1;i<=r;i++){	//从 1 开始递归 ，抽取r个元素 
			printf("%d",w[i]);
			if(i<r)	printf(" ");
		}
		printf("\n");
		return;
	}
	for(i=index+1;i<=n;i++){	//从 1 开始递归 ，共 n 个元素 
		DFS(i,count+1);
	}
} 
int main(){
	scanf("%d %d",&n,&r);	 
	DFS(0,0);	//初始 n，r为0 
	return 0;
}



