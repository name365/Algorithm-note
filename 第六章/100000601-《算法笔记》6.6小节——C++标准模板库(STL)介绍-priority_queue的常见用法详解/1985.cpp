/*1985
˼��
	- �������ȼ�����һ������ĵ�һ�������ȼ�����Ϊ0��֮������ȼ���ֵһ����ǰ1�����ȼ���ֵ��1.
	- ���ȼ����ν��͡��������ȼ��ߵ��������������	
*/
#include <stdio.h>
#include <string.h>
#include <queue>
#include <map>
using namespace std;
struct fruit{
	int num;	//��� 
	int task;	//���� 
	friend bool operator < (fruit f1,fruit f2){
		if(f1.task != f2.task)	return f1.task >f2.task;	//�������ȼ� 
		else	return f1.num >f2.num;	//���ձ�� 
	}
}f1,f2;
int main(){
	char str[100001];
	int n;
	while(scanf("%d",&n)!=EOF){
		getchar();
		priority_queue<fruit> q;
		map<int ,int> p;	//������ȼ�
		for(int i=0;i<n;i++){
			scanf("%s",str);
			int i1=4,n1=0;
			while(str[i1] != '(')	//��һ������
				n1=n1*10+str[i1++]-'0';
			fruit f;
			f.num=n1;
			if(i==0){	//�Ƿ�Ϊ��һ������ 
				f.task=0;
				q.push(f);	//ѹ��ǰ������ 
			}else	f.task = p[f.num];
			int i2=6,n2=0;
			if(str[i2]=='N')	continue;
			while(i2<strlen(str)){
				if(str[i2] >= '0' && str[i2] <='9')	//�ַ�ת��Ϊ����
					n2=n2*10+str[i2]-'0';
				if(str[i2] == ',' || str[i2] ==')'){
					if(p[n2]==0){	//������û�� 
						fruit ff;
						ff.num = n2;
						ff.task=f.task+1;
						q.push(ff);	//ѹ���������
						n2=0;
						p[n2]=ff.task;
					}
				}
				i2++;
			} 
		} 
		while(q.size()>=1){
			fruit f=q.top();	//���ʶ���Ԫ�� 
			q.pop();	//�����Ԫ�س��� 
			printf("Task%d ",f.num); 
		}
	} 	
	return 0;
}

