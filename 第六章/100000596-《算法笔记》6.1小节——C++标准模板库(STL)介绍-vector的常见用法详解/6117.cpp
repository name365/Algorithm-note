/*
˼��
	- ��һ�����һ�������෴����Ҫ�������ÿ���γ��µ�ѧ����Ϣ��
	- �������ǿ�����vector��ʾ�γ̴��룬��ѧ����Ϣ����ÿһ���γ̵�vector�С�
	- ��ѧ�������֣����ǿ����ö�ά�������洢����Ϊÿ��ѧ������������ֻ����һ�Σ�
	- ����ÿһ���������ֶ�Ӧһ�����֣��������Ǵ���vector�еľͿ��������ֶ�Ӧ���������ֶ������ַ����ˡ�
	- ���Ҫ����ĸ˳�������ʱ������sort������
	- ��cmp�������ǱȽ϶�Ӧ��vector�д洢����������������Ӧ���ַ����Ĵ�Сstrcmp(stu[a],stu[b]) <0�� 
*/
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;
vector<int> hashTable[3000];	//�洢�γ̴��� 
char stu[40010][5];	//�洢ѧ������
bool cmp(int a,int b){
	return strcmp(stu[a],stu[b])<0;
} 
int main(){
	int N,K,C,num;
	char name[5];
	vector<int>::iterator it;	//����һ��int�͵��������� 
	scanf("%d %d",&N,&K);	//ѧ���������γ�����
	for(int i=0;i<N;i++){
		scanf("%s %d",stu[i],&C);	//ѧ��������(3��Ӣ�Ĵ�д��ĸ��һ��1λ��)��һ������Cѧ��ע��Ŀγ���
		for(int j=0;j<C;j++){
			scanf("%d",&num);	//�γ̱��
			hashTable[num].push_back(i);	//���γ̴�������Ӧѧ����hash��
		}
	} 	
	for(int i=1;i<=K;i++){	//��Ŀ˵�γ̴�����˳��Ĵ�1��ʼ
		printf("%d %d\n",i,hashTable[i].size());
		sort(hashTable[i].begin(),hashTable[i].end(),cmp);	//����һ���γ̴����Ӧ��ѧ����������
		for(it=hashTable[i].begin();it !=hashTable[i].end();it++){	//������е�ѧ������
			printf("%s\n",stu[*it]);
		}
	}	
	return 0;
} 

