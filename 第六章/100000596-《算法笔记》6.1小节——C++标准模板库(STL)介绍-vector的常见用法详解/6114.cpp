/*
˼��
	- ��һ������vector���Ժܷ���Ľ������
	- ������ʵҪ���ľ��ǰ�ÿһ���γ̴���浽ÿһ��ѧ����ѡ�������
	- �����Ļ���ѧ������һ��vector�����ǲ��ϵİѿγ̴���push����Ӧѧ����vector�С�
	- ������������ɢ����һ�µ��ַ���hash������������ַ���ת����Ψһ��������
	- ��������������ҵ�hash���Ӧ��λ�á�
	- �����������ַ���һ����ĸ������һ����26*26*26*10�����ֵ���ϡ�
	- ���Ǿͽ�����ô���vector��
		const int maxn=26*26*26*10+1;//������Ψһ�Ķ�Ӧ��������maxn��
		vector<int> hashTable[maxn]; //��ÿ������ӳ���������У������������洢�γ̴���?
	- Ȼ�󲻶ϵ�push�γ̴��뵽��Ӧ��hashTable��
	- �����������Ӧ������� 
*/
#include <stdio.h>
#include <algorithm>	//sort������ͷ�ļ� 
#include <vector>
using namespace std;
const int maxn=26*26*26*10+1;//������Ψһ�Ķ�Ӧ��������maxn��
vector<int> hashTable[maxn]; //��ÿ������ӳ���������У������������洢�γ̴���
int getid(char str[]){	//���ַ���ת����Ψһ���������� 
	int id=0;
	for(int i=0;i<3;i++){
		id=id*26+str[i]-'A';
	}
	id=id*10+str[3]-'0';
	return id;
} 
int main(){
	int N,K;	//������γ��б��ѧ���������γ�����
	char name[5];
	scanf("%d %d",&N,&K);
	for(int i=0;i<K;i++){
		int course,x;
		scanf("%d %d",&course,&x);	//course�γ�����,xע��ѧ������
		for(int j=0;j<x;j++){
			scanf("%s",name);
			int id=getid(name);
			hashTable[id].push_back(course);	//���γ̴�������Ӧѧ����hash��
		}
	} 
	for(int i=0;i<N;i++){
		scanf("%s",name);
		int id=getid(name);
		sort(hashTable[id].begin(),hashTable[id].end());//���γ̴���˳�����
		printf("%s %d",name,hashTable[id].size());
		for(int j=0;j<hashTable[id].size();j++){
			printf(" %d",hashTable[id][j]);
		}
		printf("\n");
	}
	return 0;
}


