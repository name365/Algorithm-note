/*1818 
˼��
	- ��Ȼ�������Լ������ֱ������ģ�� 
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
		printf("%d\n",gcd(m,n)); 
	}
	return 0;
} 
