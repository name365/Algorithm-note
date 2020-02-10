/*1948
思考
	- 输入的第一行为N，即数组的个数(N<=1000)
	- 接下来的1行包括N个整数，其中每个数的范围为(1<=Num<=1000000000)
	- 当N=0时输入结束。输出N行，其中每一行对应上面的一个数的约数的个数。
	- 使用枚举法，将这个数除以小于这个数的所有正整数，如果没有余数，则为该数字的约数。只枚举到根号该数字	
*/
#include <stdio.h>
int cmp(int x){
	int i,sum=0;
	for(i=1;i*i<x;i++){
		if(x%i==0)	sum += 2;
	}
	if(i*i==x)	sum++;
	return sum;
}
int main(){
	int N,i,str[1010];
	while(scanf("%d",&N),N!=0){
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
			printf("%d\n",cmp(str[i]));
		}
	} 
	return 0;
} 

 
