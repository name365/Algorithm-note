/*1942
˼��
	- ��������������������ַ����洢����ת��Ϊ10������
	- ��ת��Ϊ����������������������
	- ע�����������10~16���������ַ������ÿ�������µĲ�������ʱ�����ʼ���� 
*/ 
#include <stdio.h>
int main(){
	long b,a,num,i;
	char n[100];
	while(scanf("%ld %s %ld",&a,n,&b)!=EOF){
		long sum=0,cmp[100]={0},num=0; // �������г�ʼ�� 
		for(i=0;i<strlen(n);i++){ //ת��Ϊ10������ 
			if(n[i]>='0' && n[i]<='9')
				sum=sum*a+n[i]-'0';
			else if(n[i]>='a' && n[i]<='z')
				sum=sum*a+n[i]-'a'+10;
			else if(n[i]>='A' && n[i]<='Z')
				sum=sum*a+n[i]-'A'+10;
		}
		do{ //ת��Ϊ������ 
			cmp[num++]=sum%b;
			sum=sum/b;
		}while(sum!=0);
		for(i=num-1;i>=0;i--){ //����������� 
			if(cmp[i]>=10&&cmp[i]<=15)
				printf("%c",cmp[i]+55); //ע��10���������ַ���� 
			else printf("%d",cmp[i]);
		} 
		printf("\n");
	}
	return 0;
}
