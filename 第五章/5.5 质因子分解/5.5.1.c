/*�ж������� 
*/
#include <stdio.h>
struct factor{
	int x,cnt;	//xΪ�����ӣ�cnt Ϊ����� 
}fac[10]; 
if(n%prime[1]==0){	//���prime[i]��n������ 
	fac[num].x=prime[i];	//��¼������
	fac[num].cnt=0;
	while(n%prime[i]==0){	//�����������prime[i]�ĸ��� 
		fac[num].cnt++;
		n /=prime[i];
	} 
	num++;	//��ͬ�����Ӹ����� 1  
}

if(n!=1){	//����޷������� n ���ڵ������ӳ��� 
	fac[num].x=n;	//��ôһ����һ�����ڸ���n�������� 
	fac[num++].cnt = 1; 
} 
int main(){
	
	return 0;
} 

 
