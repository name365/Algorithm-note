#include <stdio.h>
int main(){
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);//�����ά����a��Ԫ�� 
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);//�����ά����b��Ԫ�� 
		}
	} 
	int c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];//��Ӧλ��Ԫ����Ӳ����ڶ�ά����c�� 
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);//�����ά����c��Ԫ�� 
		}
		printf("\n"); 
	} 
	return 0;
}
