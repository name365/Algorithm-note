#include <stdio.h>
int main(){
	int n=233;
	char str[100];
	sprintf(str,"%d",n);//sprintf()函数是把n以"%d"的格式写到str字符数组中 
	printf("%s\n",str);
	return 0;
}
