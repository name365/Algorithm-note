/*1782
˼��
	- ��һ����������N,M��2 <= N ��M<= 200��
	- ��N���������α��Ϊ1,2,��,N����M�������α��Ϊ1,2,��,M
	- ��N�У���i(i = 1,2,��,N)��ÿһ����һ��������ʾ����i-1��ϲ����ͼ��ı��P(1<=P<=M)
	- ���i���κ��˶�û�й�ͬϲ�����飬�������BeiJu���������磬^ ^�� 
*/
#include <stdio.h>
int main(){
	int N,M,i;
	while(scanf("%d %d",&N,&M)!=EOF){
		int str[200]={0},num[1010]={0}; //��i������---str[i]��Ӧ����ţ�i�������---num[i]�����������
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
			num[str[i]]++;
		}
		for(i=0;i<N;i++){
			if(num[str[i]]==1)	printf("BeiJu\n");
			else	printf("%d\n",num[str[i]]-1);
		}
	} 
	return 0;
}
