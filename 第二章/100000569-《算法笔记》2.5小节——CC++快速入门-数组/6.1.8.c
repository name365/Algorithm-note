#include <stdio.h>
int main(){
	int a[10],i,j;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++){//����n-1�� 
	//��i��ʱ��a[0]��a[n-i-1]����������һ�����Ƚ� 
		for(j=1;j<11-i;j++){
			if(a[j-1]>a[j]){//�����ߵ��������򽻻�
				int temp = a[j-1];
				a[j-1]=a[j];
				a[j]=temp;	
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
