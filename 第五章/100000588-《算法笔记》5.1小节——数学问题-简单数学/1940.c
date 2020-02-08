/*1940
思考
	- N是一个四位数，其9倍恰好是其反序数
	- 说了是4位数，但是1000肯定是不行的，所以直接从1001开始枚举。
	- 因为要求是反序，所以乘以9后绝对不能超过4位数，枚举到1111就可以了。
*/ 
#include <stdio.h> 
int main(){
	int i,j;
	for(i=1001;i<=1111;i++){
		int a=i,b=i*9,A[4],B[4];
		for(j=0;j<4;j++){	// 将a和b分别存进数组
			A[j]=a%10;
			B[j]=b%10;
			a=a/10;
			b=b/10;
		} 
		if(A[0]==B[3]&&A[1]==B[2]&&A[2]==B[1]&&A[3]==B[0])
			printf("%d\n",i);
	}
	return 0;
} 



