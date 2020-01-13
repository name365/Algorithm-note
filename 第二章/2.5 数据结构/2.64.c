#include <stdio.h>
#include <string.h>
int main(){
	int i,a[5]={1,2,3,4,5};
	//赋初值0
	memset(a,0,sizeof(a));//memset---对数组中每一个元素赋相同的值 
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	} 
	printf("\n");
	//赋初值-1
	memset(a,-1,sizeof(a));
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	} 
	printf("\n");
	return 0;
} 
