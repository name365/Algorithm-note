#include <stdio.h>
#include <string.h>
int main(){
	char str[10];
	gets(str);
	int len=strlen(str);//strlen()函数可以获得字符数组中第一个\0前的字符的个数 
	printf("%d\n",len);
	return 0;
} 
