#include <stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	strcpy(str1,str2);//strcpy()函数可以把一个字符串复制给另一个字符串 
	puts(str1);
	return 0;
} 
