/*问题 A: 【递归入门】全排列
	- 先给一个正整数 ( 1 < = n < = 10 ) 
	- 例如n＝3，所有组合,并且按字典序输出：  
	- 每个全排列一行，相邻两个数用空格隔开（最后一个数后面没有空格） 
思考
	- 	
*/
#include <stdio.h>
int n,w[11],str[11]={0};
void DFS(int index){	//当前处理下标为index的数
	int i;
	if(index == n){	//递归边界：
		for(i=0;i<n-1;i++)
			printf("%d ",w[i]);
		printf("%d\n",w[n-1]);
		return;
	}
	for(i=0;i<n;i++){	//递归核心：从低到高选中尚未选中的数
		if(str[i+1]==0){	//若i不在数组里
			w[index]=i+1;	//向w[index]填数
			str[i+1]=1;	//标记已填此数
			DFS(index+1);	//填下一个，即w[index+1]，(直到结束)
			str[i+1]=0;	//已尝试过w[index]=i，返回状态进行下一个循环w[index]=i+1
		}
	}	
} 
int main(){
	while(scanf("%d",&n)!=EOF){
		DFS(0);
	}	
	return 0;
}



