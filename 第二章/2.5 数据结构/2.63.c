#include <stdio.h>
int main(){
	int a[3][3][3],i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				scanf("%d",&a[i][j][k]);//������ά����a��Ԫ��
				a[i][j][k]++;	//���� 
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("%d\n",a[i][j][k]);	//�����ά����a��Ԫ�� 
			}
		}
	} 
	return 0;
}
