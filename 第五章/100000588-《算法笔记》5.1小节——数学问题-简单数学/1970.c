/*1970
˼��
	- ������������ĳ˻�����һ����2*3���󣬵ڶ�����3*2���󣬽��Ϊһ��2*2����
	- ������һ��3*2���飬�����һ��3*2������
	- ��������������ĳ˻������Ϊһ��2*2���� 
*/
#include <stdio.h>
int main(){
	int num[2][3],num2[3][2],num3[2][2],i,j,k;
	while(scanf("%d %d %d",&num[0][0],&num[0][1],&num[0][2])!=EOF){
		scanf("%d %d %d",&num[1][0],&num[1][1],&num[1][2]);
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				scanf("%d",&num2[i][j]);
			}
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				num3[i][j]=0;
				for(k=0;k<3;k++){
					num3[i][j] += num[i][k]*num2[k][j];
				}
				printf("%d ",num3[i][j]);
			}
			printf("\n");
		}
	} 
	return 0;
} 

 
