#include <stdio.h>
int main(){
	int n;
	char str[100]="123";
	sscanf(str,"%d",&n);//sscanf()函数把字符数组str中的内容以"%d"的格式写到n中 
	printf("%d\n",n);
	return 0;
} 
