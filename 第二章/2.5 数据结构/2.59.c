#include <stdio.h>//ð������  
int main(){
	int a[10]={3,1,4,5,2},i,j;
	for(i=1;i<=4;i++){//����n-1�� 
	//��i��ʱ��a[0]��a[n-i-1]����������һ�����Ƚ� 
		for(j=0;j<5-1;j++){
			if(a[j]>a[j+1]){//�����ߵ��������򽻻�a[j]��a[j+1] 
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
