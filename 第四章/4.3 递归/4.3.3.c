/*全排列 
*/
#include <stdio.h>
typedef int bool; //自定义bool 
#define false 0
#define true  1
int n,P[11],hashTable[11]={false}; //P为当前排列，hashTable记录整数x是否已经在P中 
void generateP(int index){ //当前处理排列的第index列 
	int i,x;
	if(index==n+1){ //递归边界，已经处理完排列的1~n位 
		for(i=1;i<=n;i++){
			printf("%d",P[i]); //输出当前排列 
		}
		printf("\n");
		return;
	}
	for(x=1;x<=n;x++){ //枚举1~n，试图将 x填入P[index] 
		if(hashTable[x]==false){ //如果 x不在P[0]~P[index-1]中 
			P[index]=x; //令P的第index位为 x,即把x加入当前排列 
			hashTable[x]=true; //记住x已在P中 
			generateP(index+1); //处理排列的第index+1号位 
			hashTable[x]=false; //已处理完P[index]为x的子问题，还原状态 
		}
	}
}
int main(){
	n=3; //欲输出1~3的全排列 
	generateP(1); //从P[1]开始填 
	return 0;
}
