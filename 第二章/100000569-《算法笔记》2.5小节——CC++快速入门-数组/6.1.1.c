//插入有序的序列，从后往前，将大于此数的数后移，然后将此数插入，最后输出就行啦
#include <stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	int d=a[9],p=8;
	while(a[p]>d){
		a[p+1]=a[p];
		p--;
	}
	a[p+1]=d;
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	return 0;
}
