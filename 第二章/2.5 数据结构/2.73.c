#include <stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	strcpy(str1,str2);//strcpy()�������԰�һ���ַ������Ƹ���һ���ַ��� 
	puts(str1);
	return 0;
} 
