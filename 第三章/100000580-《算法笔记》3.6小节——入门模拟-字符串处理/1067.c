/*1067
˼��
	- ע��������ַ������ܻ��пո�������putchar()������� 
*/
#include <stdio.h>
int main(){
	char zi[210];
	while(gets(zi)!=NULL){
		int i;
		for(i=strlen(zi)-1;i>=0;i--){
			putchar(zi[i]);
		}
		printf("\n");
	}
	return 0;
} 
