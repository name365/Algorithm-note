/*���� D: ���ݹ����š�n�ʺ� ���⣨ԭʼ��8�ʺ����⣩
	- ���ֵ���������з�����ÿ�ַ���˳������ʺ����ڵ��кţ���������֮���ÿո���������һ����з�����û�У����"no solute!"
˼��
	- ����ȫ���е������� 
	- C�������Զ���bool��������0����false��true���� 1
*/
#include <stdio.h>
int n,w[11],str[11]={0},no;
void DFS(int index){	////ȫ���о��൱����һ�������ﲻ�ϵ����� ��ǰ�����±�Ϊindex����
	int i,j;
	for(i=0;i<index-1;i++){	//��֦ 
		for(j=i+1;j<index;j++){
			if(i-j==w[i]-w[j] || w[i]+i==w[j]+j)
				return;
		}
	}
	if(index == n){	//�ݹ�߽磺
		for(i=0;i<n;i++)
			printf("%d ",w[i]+1);
		printf("\n");
		no=0; 
		return;
	}
	for(i=0;i<n;i++){	//�ݹ���ģ��ӵ͵���ѡ����δѡ�е���
		if(!str[i]){	//��i��������
			w[index]=i;	//��w[index]����
			str[i]=1;	//����������
			DFS(index+1);	//������һ��λ�ã���w[index+1]��(ֱ������)
			str[i]=0;	//���ݹ鷵�����ˣ�����index�±�Ϊi �������⴦����ϣ���ԭ 
		}
	}	
} 
int main(){
	while(scanf("%d",&n)!=EOF){
		no=1; 
		DFS(0);
		if(no)	printf("no solute!\n");
	}	
	return 0;
}





 
