/*1944
˼��
	- ����֮ǰ��ʮ����ת��Ϊ������ƣ�������� 
*/ 
#include <stdio.h>
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		int cmp[100]={0},num=0;
		do{ //ת��Ϊ������ 
			cmp[num++]=N%8;
			N=N/8;
		}while(N!=0);
		for(i=num-1;i>=0;i--){ //����������� 
			printf("%d",cmp[i]);
		} 
		printf("\n");
	}
	return 0;
} 
