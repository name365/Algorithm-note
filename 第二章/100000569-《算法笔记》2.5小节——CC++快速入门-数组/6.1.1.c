#include <stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&a[9]); 
	for(i=9;i>=0;i--){
		if(a[i]<a[i-1]){
			int temp = a[i];
			a[i]=a[i-1];
			a[i-1]=temp;	
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
