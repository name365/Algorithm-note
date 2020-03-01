/*PAT A1052 Linked List Sorting
����
- ����N�����ĵ�ַaddress��������data�Լ�ָ����next,Ȼ�����������׵�ַ,Ҫ
�������������ϵĽ��ȭdataֵ��С���������

��������
- ��������,���������������ġ�(����ʽΪ[address,datanext]):
[00001.0.22222]һ[22222,1000,12345]һ[12345,-1.33333]һ[33333,100000,11111]~[11111,
100,-1]
.��keyֵ����֮��õ�:
[12345,-1.00001]һ[00001,0,11111]~[11111,100,22222]һ[22222,1000,33333]һ[33333,
100000,-1]

˼·
- �˴�����ֱ������ǰ�潲���һ����ⲽ��.

- ����1:���徲̬����,���н��������bool�ͱ���flag����,��ʾΪ�������������
����֡�flagΪfalse��ʾ��Ч���(���������ϵĽ��)��

- ����2:��ʼ��,��flag��Ϊfalse(��0),��ʾ��ʼ״̬�����н�㶼����Ч��㡣

- ����3:����Ŀ�����������׵�ַbegin������������,�������Ч����flagΪtue(��
13,ͬʱ������Ч���ĸ���count.

- ����4:�Խ���������,������cmp������ԭ����:���cmp�����������������
��Ч���Ļ�,��flag�Ӵ�С����,�԰���Ч����ŵ��������(��Ϊ��Ч����flag
Ϊ1,������Ч����flag);�����������С��������

- ����5:������Ч����Ѿ������������С��������,��˰�Ҫ�������Ч��㼴�ɡ�

ע���
- ����ֱ��ʹ��%05d�������ʽ,���ڲ�����λʱ�ڸ�λ��0��
- ����Ҫע�� -1 ����ʹ�� %05d �������ʽ,��������-0001(������-1����-00001),��˱���Ҫ����-1�����
- ��Ŀ���ܻ�����Ч���,��������Ŀ�������׵�ַ��ʼ�������ϡ�
- �������滹�о�Ϊ��Ч�����,��ʱ��Ҫ������Ч���ĸ������������0-1����

*/ 
#include <stdio.h>
#include <algorithm> 
using namespace std;
const int maxn = 100005;
struct Node{	//���徲̬����(����һ) 
	int address,data,next;
	bool flag;	//����Ƿ��������� 
}node[maxn]; 
bool cmp(Node a,Node b){
	if(a.flag==false || b.flag == false){
		return a.flag > b.flag;	//ֻҪ��a��bһ����Ч��㣬�Ͱ����ź��� 
	}else{
		return a.data < b.data;	//���������Ч��㣬����Ҫ������ 
	}
}
int main(){
	for(int i=0;i<maxn;i++){	//��ʼ��(����2) 
		node[i].flag = false;
	}
	int n,begin,address;
	scanf("%d %d",&n,&begin);
	for(int i=0;i<n;i++){
		scanf("%d",&address);
		scanf("%d %d",&node[address].data,&node[address].next);
		node[address].address = address;
	}
	int count=0,p=begin;
	while(p != -1){	//ö������������Ч������������3 
		node[p].flag = true;
		count++;
		p = node[p].next;
	}	
	if(count==0){	//���У���������û�н��ʱ���0 -1 
		printf("0 -1");
	}else{	//ɸѡ��Ч��㣬��С�������򣬲���4 
		sort(node,node+maxn,cmp);
		printf("%d %05d\n",count,node[0].address);	//������������5 
		for(int i=0;i<count;i++){
			if(i != count-1){
				printf("%05d %d %05d\n",node[i].address,node[i].data,node[i+1].address);
			}else{
				printf("%05d %d -1\n",node[i].address,node[i].data);
			}
		}
	}
	return 0;
} 




















 
