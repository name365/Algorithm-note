#include <stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	strcat(str1,str2);//strcat()���԰�һ���ַ����ӵ���һ���ַ������� 
	puts(str1);
	return 0;
} 
