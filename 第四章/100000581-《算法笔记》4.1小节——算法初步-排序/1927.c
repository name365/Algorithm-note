/*1927
˼��
	- ע��������ַ����п����пո�ʹ��gets()���������ַ���
	- ����һ���Զ����ַ������� 
*/
#include <stdio.h>
int cmp( const void *a , const void *b ) 
{ 
  return *(char *)a - *(char *)b; 
} 
int main(){
	char word[210]; //ע���ֹԽ�� 
	while(gets(word)!=NULL){
		int len=strlen(word);
		qsort(word,len,sizeof(word[0]),cmp); 
		printf("%s\n",word);
	} 
	return 0;
} 
