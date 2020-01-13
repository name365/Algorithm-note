#include <stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	int cmp=strcmp(str1,str2);//strcmp()函数是返回两个字符串大小的比较结果，比较原则是按字典序 
	if(cmp<0)	printf("str1 <str2\n");
	else if(cmp>0)	printf("str1 >str2\n");
	else	printf("str1 == str2\n");
	return 0;
} 
