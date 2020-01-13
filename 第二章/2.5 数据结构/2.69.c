#include <stdio.h>
int main(){
	char str1[20];
	char str2[5][10];
	gets(str1);//gets()输入一行字符串
	int i;
	for(i=0;i<3;i++){
		gets(str2[i]);
	} 
	puts(str1);//puts()输出一行字符串
	for(i=0;i<3;i++){
		puts(str2[i]);
	} 
	return 0;
} 
