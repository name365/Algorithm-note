/*1941
˼��
	- �󼸽��������������Խ���ȡ�࣬ȡ�����������飬�������
	- ע���������������Ӻ�Ľ�����ܻᳬ��int��long�ķ�Χ�� 
*/
#include <stdio.h>
int main(){
	int m,i,cmp[100],num;
	long long sum,A,B;
	while(~scanf("%lld",&m)){
		scanf("%lld %lld",&A,&B);
		if(m==0) break;
		sum=0,num=0;
		sum=A+B;
		do{ //ת��Ϊ������ 
			cmp[num++]=sum%m;
			sum=sum/m;
		}while(sum!=0);
		for(i=num-1;i>=0;i--){ //����������� 
			printf("%d",cmp[i]);
		} 
		printf("\n");
	}
	return 0;
}
