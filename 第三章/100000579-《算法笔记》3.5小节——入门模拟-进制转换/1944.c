/*1944
思考
	- 套用之前的十进制转换为任意进制，逆序输出 
*/ 
#include <stdio.h>
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		int cmp[100]={0},num=0;
		do{ //转换为进制数 
			cmp[num++]=N%8;
			N=N/8;
		}while(N!=0);
		for(i=num-1;i>=0;i--){ //逆序输出数组 
			printf("%d",cmp[i]);
		} 
		printf("\n");
	}
	return 0;
} 
