#include <stdio.h>
int main(){
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);//输入二维数组a的元素 
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);//输入二维数组b的元素 
		}
	} 
	int c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];//对应位置元素相加并放在二维数组c中 
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);//输出二维数组c的元素 
		}
		printf("\n"); 
	} 
	return 0;
}
