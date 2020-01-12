#include <stdio.h>//冒泡排序  
int main(){
	int a[10]={3,1,4,5,2},i,j;
	for(i=1;i<=4;i++){//进行n-1趟 
	//第i趟时从a[0]到a[n-i-1]都与他们下一个数比较 
		for(j=0;j<5-1;j++){
			if(a[j]>a[j+1]){//如果左边的数更大，则交换a[j]和a[j+1] 
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
