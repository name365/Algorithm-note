/*1963
˼��
	- ��gets()������getchar()�����ֱ�����ַ������ַ�
	- �����ж��ַ������������������Ӧ���ַ���������������
	- �����û��з���ʾ���� 
*/
#include <stdio.h>
int main(){
	char s[100000],c;
	while(gets(s)!=NULL){
		c=getchar();
		int i;
		for(i=0;i<strlen(s);i++){
			if(s[i]!=c) printf("%c",s[i]);
			if(i==strlen(s)-1) printf("\n");
		} 
		getchar(); //���յ����з� 
	}
	return 0;
}
