/*1942
思考
	- 输入变量，将进制数用字符串存储，先转换为10进制数
	- 再转换为任意进制数，逆序输出数组
	- 注意数组输出的10~16进制数的字符输出，每次输入新的测试数据时，需初始化。 
*/ 
#include <stdio.h>
int main(){
	long b,a,num,i;
	char n[100];
	while(scanf("%ld %s %ld",&a,n,&b)!=EOF){
		long sum=0,cmp[100]={0},num=0; // 变量进行初始化 
		for(i=0;i<strlen(n);i++){ //转换为10进制数 
			if(n[i]>='0' && n[i]<='9')
				sum=sum*a+n[i]-'0';
			else if(n[i]>='a' && n[i]<='z')
				sum=sum*a+n[i]-'a'+10;
			else if(n[i]>='A' && n[i]<='Z')
				sum=sum*a+n[i]-'A'+10;
		}
		do{ //转换为进制数 
			cmp[num++]=sum%b;
			sum=sum/b;
		}while(sum!=0);
		for(i=num-1;i>=0;i--){ //逆序输出数组 
			if(cmp[i]>=10&&cmp[i]<=15)
				printf("%c",cmp[i]+55); //注意10进制以上字符输出 
			else printf("%d",cmp[i]);
		} 
		printf("\n");
	}
	return 0;
}
