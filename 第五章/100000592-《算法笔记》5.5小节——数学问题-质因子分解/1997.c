/*1997
˼��
	- ���2 ��60 ֮�����С��������͡�ӯ����������������ʽ����� 
	- E: e1 e2 e3 ......(ei Ϊ����) G: g1 g2 g3 ......(gi Ϊӯ��)
	-  
*/
#include <stdio.h>
int main(){
	int i,j,w[60],y[60],m=0,n=0;
	for(i=2;i<=60;i++){
		int sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)
				sum +=j;	//��������� 
		}
		if(sum==i)	w[m++]=i;	//�����洢������ 
		else if(sum>i)	y[n++]=i;	//ӯ���洢������ 
	} 
	printf("E: ");	//������� 
	for(i=0;i<m;i++)
		printf("%d ",w[i]);
	printf("G: ");	//���ӯ�� 
	for(i=0;i<n;i++){
		printf("%d",y[i]);
		if(i!=n-1)	printf(" ");
		else	printf("\n");
	} 
	return 0;
} 


 
