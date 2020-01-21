/*1943
思考
	- 注意数据类型，30位数据用字符串输入整数n，因若是30位的整数已经超过 long long的范围
	- 再将字符串转换为数字存入数组
	- 再判断奇偶性来决定余数，再辗转相除法计算
	- 输出数组，注意除去首位多余的数字 
*/
#include <stdio.h>
int main(){
	char cmp[100];
	while(scanf("%s",cmp)!=EOF){
		int sum[100],num=0,i,j;
		int len=strlen(cmp);	
		for(i=0;i<len;i++){ //将字符串转换为数字存入数组 
			cmp[i]-='0';
		}
		for(i=0;i<len;){ //这里没有i++ 
			sum[num++]=cmp[len-1]%2; //尾数的奇偶性决定了余数
			for(j=0;j<len;j++){ //每一位除以2
				if(cmp[j]%2==0){ //偶数则直接除
					cmp[j] /= 2;
				}else { //奇数下一位加10
					cmp[j] /= 2;
					cmp[j+1] += 10;
				}
			}
			if(!cmp[i]) i++; //首位为0则后移一位
		}
		for(i=num-1;i>=0;i--){
			printf("%d",sum[i]);
		}
		printf("\n");
	} 
	return 0;
} 
