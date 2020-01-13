#include <stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	strcat(str1,str2);//strcat()可以把一个字符串接到另一个字符串后面 
	puts(str1);
	return 0;
} 
