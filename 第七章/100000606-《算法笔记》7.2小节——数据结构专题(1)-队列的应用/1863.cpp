/*1863
˼��
	- ����10����������������С�������һ�����Ի����������������һ�����Ի���
	- �ȶ���ʮ����������С����������λ������������ĩβ��
	- �������Ƚ�����С�������Ҫ�����ٽ���֮�������С������������±꣬����ڶ��ν������� 
*/
#include <stdio.h>
int main(){
	int str[10];
	while(~scanf("%d",&str[0])){
		int max=0,min=0;
		for(int i=1;i<10;i++){
			scanf("%d",&str[i]);
			if(str[max]<str[i])	max=i;
			if(str[min]>str[i])	min=i;
		}
		int temp=str[0];	//����Сֵ���������������ֵ��λ�ÿ��ܸı�
		str[0]=str[min];
		str[min]=temp;
		if(max==0)	max=min;
		temp=str[9];
		str[9]=str[max];
		str[max]=temp;
		for(int i=0;i<10;i++)
			printf("%d ",str[i]);
		printf("\n");
	}
	return 0;
} 


 
