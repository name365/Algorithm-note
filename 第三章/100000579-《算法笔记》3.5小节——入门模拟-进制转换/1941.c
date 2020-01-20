/*1941
思考
	- 求几进制数，就用数对进制取余，取余结果存入数组，遍历输出
	- 注意输入的两个数相加后的结果可能会超过int和long的范围。 
*/
#include <stdio.h>
int main(){
	int m,i,cmp[100],num;
	long long sum,A,B;
	while(~scanf("%lld",&m)){
		scanf("%lld %lld",&A,&B);
		if(m==0) break;
		sum=0,num=0;
		sum=A+B;
		do{ //转换为进制数 
			cmp[num++]=sum%m;
			sum=sum/m;
		}while(sum!=0);
		for(i=num-1;i>=0;i--){ //逆序输出数组 
			printf("%d",cmp[i]);
		} 
		printf("\n");
	}
	return 0;
}
