/*6126
˼��
	- ���ƶȶ���ΪNC/NT*100%������NC���������Ϲ��еĲ�ͬ�������ĸ�����NT�����������в�ͬ����������
	- ��Ŀ˵�����ȼ�����������ȥ�غ�Ľ���Nc,Ȼ���������Ԫ�ز�����ȥ��Nt,���������
	- ��������n��������n�鼯�ϣ�����Ϊ3�鼯�ϣ��������鼯�ϵĽ�����NC���Ͳ�����NT����
	- ����K�������ѯK�Σ�1 2 �� 1 3��ʾ�ֱ��ѯ����1��2�ͼ���1��3��
	- 1.����set�����ż���
	- 2.��ѯ����jh1��jh2��NC��t=NT�ֱ��ʾ����Ԫ�ظ����Ͳ���Ԫ�ظ�����
		- ���Ƚ�NT��Ϊ����jh2��Ԫ�ظ��������ʼ���x��Ԫ�أ�
		- ����ڼ���jh2�����ҵ���ʹ��find������������ز�����end������ô��������+1�����򲢼�����+1��
	
*/
#include <stdio.h> 
#include <set>
using namespace std;
int main(){
	set<int> st[70];	//����set�����ż��� 
	int N,M,num,K;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d",&M);
		for(int j=0;j<M;j++){
			scanf("%d",&num);
			st[i].insert(num);
		}		
	}
	scanf("%d",&K);
	while(K--){
		int jh1,jh2,NC=0,NT;
		scanf("%d %d",&jh1,&jh2);
		for(set<int>::iterator it=st[jh1].begin();it !=st[jh1].end();it++){
			if(st[jh2].find(*it) != st[jh2].end())	NC++;	//��jh2����jh1�ĸ���Ԫ���Ƿ����
		}
		NT=st[jh1].size()+st[jh2].size() - NC;
		printf("%.1lf%%\n",(double)NC/NT*100);
	}
	return 0;
} 
