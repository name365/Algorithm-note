/*2018
˼��
	- ��쳲��������еĵݹ麯��������nֵ��ʹ�øõݹ麯���������Ŀͼ��
	- ��Ӧÿ���������Ҫ���ͼ��.
*/
#include <stdio.h>
int F(int n){
	if(n==0)	return 0;
	else if(n==1) return 1; //�ݹ�߽�
	return F(n-1)+F(n-2); //�ݹ�ʽ 
}
int main(){
	int m,n,i,j;
	while(scanf("%d",&m)!=EOF){ //������m
		while(m--){
			scanf("%d",&n); //ÿ��һ������n
			for(i=1;i<=n;i++){ //�������
				for(j=0;j<n-i;j++){ //�� 1����n-1��" " 
					printf("  "); //�����ո�ע���ʽ 
				}
				for(j=0;j<1+(i-1)*2;j++){ //��n�����1+(n-1)*2��쳲���������
					printf("%d ",F(j));
				}
				printf("\n");
			}
		}
	} 
	return 0;
}
 
