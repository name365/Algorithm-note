#include <stdio.h>
int main(){
	int n=233;
	char str[100];
	sprintf(str,"%d",n);//sprintf()�����ǰ�n��"%d"�ĸ�ʽд��str�ַ������� 
	printf("%s\n",str);
	return 0;
}
