/*1783
˼��
	- ��������N(N>1)���������ĸ�������ͬ����������Ҫ�ظ����㡣��120=2*2*2*3*5������5����������
	- ע��1����N������������NΪ������N��N����������(1<N<10^9)��
*/
#include <stdio.h>
#include <math.h>
typedef int bool;
#define false 0
#define true  1
int prime[10010],cnt=0,i,j;	
bool p[10010]={0};//p[10010]�洢���������� 
void cmp(){	//ɸѡ��Щ�������� 
	for(i=2;i<10010;i++){
		if(p[i]==false){
			prime[cnt++]=i;
			for(j=i;j<10010;j += i){
				p[j]=true;
			}
		}  
	} 
}
int main(){
	int n;
	cmp();	//���÷���
	while(scanf("%d",&n)!=EOF){
		int count=0,sqr=(int)sqrt(1.0*n);	//n�ĸ���
		for(i=0;i<cnt && prime[i] <= sqr;i++){
			if(n%prime[i]==0){	//���prime[i]��n������ 
				while(n%prime[i]==0){	//�����������prime[i]�ĸ��� 
					count++;
					n /=prime[i];
				}   
			}
			if(n==1)	break;
		}
		if(n!=1){	//�������жϴ��� sqrt(1e9)����
			count++;
		}
		printf("%d\n",count);
	} 
	return 0;
} 
