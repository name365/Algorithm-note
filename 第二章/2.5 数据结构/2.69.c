#include <stdio.h>
int main(){
	char str1[20];
	char str2[5][10];
	gets(str1);//gets()����һ���ַ���
	int i;
	for(i=0;i<3;i++){
		gets(str2[i]);
	} 
	puts(str1);//puts()���һ���ַ���
	for(i=0;i<3;i++){
		puts(str2[i]);
	} 
	return 0;
} 
