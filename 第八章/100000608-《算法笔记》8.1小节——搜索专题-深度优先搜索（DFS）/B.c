/*���� B: ���ݹ����š���ϵ����
	- ��n��Ԫ���г��r��Ԫ��(����˳����r < �� n)�����ǿ��Լ򵥵ؽ�n��Ԫ�����Ϊ��Ȼ��1��2������n��������ȡr������ 
	- һ��������Ȼ��n��r ( 1 < n < 21��1 < �� r < �� n )��
	- ���е���ϣ�ÿһ�����ռһ�������е�Ԫ�ذ���С�����˳�����У����е����Ҳ���ֵ�˳��
˼��
	- 	
*/
#include <stdio.h>
int n,r,w[21];
void DFS(int index,int count){	//��ǰ�����±�Ϊindex����
	int i;
	w[count]=index;
	if(count == r){	//�ݹ�߽磺
		for(i=1;i<=r;i++){
			printf("%d",w[i]);
			if(i<r)	printf(" ");
		}
		printf("\n");
		return;
	}
	for(i=index+1;i<=n;i++){
		DFS(i,count+1);
	}
} 
int main(){
	scanf("%d %d",&n,&r);
	DFS(0,0);
	return 0;
}



