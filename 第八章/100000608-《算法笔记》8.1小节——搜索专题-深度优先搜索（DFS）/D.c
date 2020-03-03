/*问题 D: 【递归入门】n皇后 问题（原始的8皇后问题）
	- 按字典序输出所有方案。每种方案顺序输出皇后所在的列号，相邻两数之间用空格隔开。如果一组可行方案都没有，输出"no solute!"
思考
	- 这是全排列的升级版 
	- C语言需自定义bool，所以用0代表false，true代表 1
*/
#include <stdio.h>
int n,w[11],str[11]={0},no;
void DFS(int index){	////全排列就相当于往一个数组里不断的填数 当前处理下标为index的数
	int i,j;
	for(i=0;i<index-1;i++){	//剪枝 
		for(j=i+1;j<index;j++){
			if(i-j==w[i]-w[j] || w[i]+i==w[j]+j)
				return;
		}
	}
	if(index == n){	//递归边界：
		for(i=0;i<n;i++)
			printf("%d ",w[i]+1);
		printf("\n");
		no=0; 
		return;
	}
	for(i=0;i<n;i++){	//递归核心：从低到高选中尚未选中的数
		if(!str[i]){	//若i在数组里
			w[index]=i;	//向w[index]填数
			str[i]=1;	//标记已填此数
			DFS(index+1);	//处理下一个位置，即w[index+1]，(直到结束)
			str[i]=0;	//当递归返回至此，表明index下标为i 的子问题处理完毕，还原 
		}
	}	
} 
int main(){
	while(scanf("%d",&n)!=EOF){
		no=1; 
		DFS(0);
		if(no)	printf("no solute!\n");
	}	
	return 0;
}





 
