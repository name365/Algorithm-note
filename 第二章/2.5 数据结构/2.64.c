#include <stdio.h>
#include <string.h>
int main(){
	int i,a[5]={1,2,3,4,5};
	//����ֵ0
	memset(a,0,sizeof(a));//memset---��������ÿһ��Ԫ�ظ���ͬ��ֵ 
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	} 
	printf("\n");
	//����ֵ-1
	memset(a,-1,sizeof(a));
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	} 
	printf("\n");
	return 0;
} 
