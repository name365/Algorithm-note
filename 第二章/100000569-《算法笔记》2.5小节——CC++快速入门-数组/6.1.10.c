#include <stdio.h>
int main(){
	char a[10][10];
	int i,max=0;
	for(i=0;i<3;i++)
		gets(a[i]);
	for(i=1;i<3;i++)//strcmp()�������������ַ�����С�ıȽϽ�� 
		if(strcmp(a[max],a[i])<=0)
			max=i;
	printf("%s",a[max]);
	return 0;
}
