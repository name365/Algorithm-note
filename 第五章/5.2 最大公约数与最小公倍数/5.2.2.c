/*��С������
˼��
	- ��Ȼ������С����������ֻ�������Լ�� d �Ļ����ϣ����� a*b/d��
	- ����ʵ�ʼ����У���������Ŀ��ܣ����Ը�ǡ���� a/d*b����ֱ������ģ�� 
ģ��һ�� 
	int gcd(int a,int b){
		if(b==0)	return a;
		else	return gcd(b,a%b);
 	}
ģ�����
	int gcd(int a,int b){
		return	!b ? a : gcd(b,a%b);
	}
	- ע���ʽ 
*/
#include <stdio.h>
int gcd(int a,int b){	//�ݹ�д�� 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int d=gcd(m,n);
		printf("%d\n",m/d*n);  //�����С������ 
	}
	return 0;
}  
