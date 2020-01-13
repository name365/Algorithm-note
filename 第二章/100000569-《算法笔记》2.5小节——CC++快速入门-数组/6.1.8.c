#include <stdio.h>
int main(){
	int a[10],i,j;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++){//进行n-1趟 
	//第i趟时从a[0]到a[n-i-1]都与他们下一个数比较 
		for(j=1;j<11-i;j++){
			if(a[j-1]>a[j]){//如果左边的数更大，则交换
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
