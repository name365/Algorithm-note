/*6120
˼��
	- ��Ŀ������������ַ��������ַ�����1�����ַ���2�е���ĸ��ȥ����
	- ��Ҫע����ǣ�ֻ��һ�����밸�������һ�в��ܻ��У���Ȼ�������  
*/ 
#include <stdio.h>
int main(){
	char str[10010],str2[10010];
	int i;
	gets(str);gets(str2);
	int hashTable[128]={0}; //ASCII���Ӧ��������ֻ��0-127
	for(i=0;i<strlen(str2);i++){
		hashTable[str2[i]]++;
	} 
	for(i=0;i<strlen(str);i++){ //ģ��s1-s2 
		if(hashTable[str[i]]==0)
			printf("%c",str[i]);
	}
	return 0;
} 
