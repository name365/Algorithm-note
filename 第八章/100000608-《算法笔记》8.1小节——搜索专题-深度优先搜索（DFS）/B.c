/*���� A: ���ݹ����š�ȫ����
	- �ȸ�һ�������� ( 1 < = n < = 10 ) 
	- ����n��3���������,���Ұ��ֵ��������  
	- ÿ��ȫ����һ�У������������ÿո���������һ��������û�пո� 
˼��
	- 	
*/
#include <stdio.h>
int n,w[11],str[11]={0};
void DFS(int index){	//��ǰ�����±�Ϊindex����
	int i;
	if(index == n){	//�ݹ�߽磺
		for(i=0;i<n-1;i++)
			printf("%d ",w[i]);
		printf("%d\n",w[n-1]);
		return;
	}
	for(i=0;i<n;i++){	//�ݹ���ģ��ӵ͵���ѡ����δѡ�е���
		if(str[i+1]==0){	//��i����������
			w[index]=i+1;	//��w[index]����
			str[i+1]=1;	//����������
			DFS(index+1);	//����һ������w[index+1]��(ֱ������)
			str[i+1]=0;	//�ѳ��Թ�w[index]=i������״̬������һ��ѭ��w[index]=i+1
		}
	}	
} 
int main(){
	while(scanf("%d",&n)!=EOF){
		DFS(0);
	}	
	return 0;
}



