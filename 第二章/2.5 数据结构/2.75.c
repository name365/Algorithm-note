#include <stdio.h>
int main(){
	int n;
	char str[100]="123";
	sscanf(str,"%d",&n);//sscanf()�������ַ�����str�е�������"%d"�ĸ�ʽд��n�� 
	printf("%d\n",n);
	return 0;
} 
