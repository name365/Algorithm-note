#include <stdio.h>
#include <string.h>
int main(){
	char str[10];
	gets(str);
	int len=strlen(str);//strlen()�������Ի���ַ������е�һ��\0ǰ���ַ��ĸ��� 
	printf("%d\n",len);
	return 0;
} 
