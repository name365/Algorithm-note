/*����N���ַ���(ǡ����3λ��д��ĸ���),�ٸ���M����ѯ�ַ�����
��ÿ����ѯ�ַ�����N���ַ����г��ֵĴ�����*/
#include <stdio.h>
char S[100][5],temp[5];
int hashTable[26*26*26+10];
int hashFunc(char S[],int len){
	int i,id=0;
	for(i=0;i<len;i++){
		id=id*26+(S[i]-'A');
	}
	return id;
}
int main(){
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%s",S[i]);
		int id=hashFunc(S[i],3); //���ַ���S[i]ת��Ϊ���� 
		hashTable[id]++; //���ַ����ĳ��ִ�����1 
	}
	for(i=0;i<m;i++){
		scanf("%s",temp);
		int id=hashFunc(temp,3); //���ַ���tempת��Ϊ����
		printf("%d\n",hashTable[id]); //������ַ������ֵĴ��� 
	} 
	return 0;
}
