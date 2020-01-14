#include <stdio.h>
int min=0,max=0,i;
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
} 
int* MAX(int a[]){
	for(i=1;i<10;i++)
		if(a[max]<a[i])
			max=i; 
	return &a[max];
}
int* MIN(int a[]){
	for(i=1;i<10;i++)
		if(a[min]>a[i])
			min=i;
	return &a[min];
}
int main(){
	int a[10],*p,*q;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	p=MAX(a);
	swap(p,&a[9]);
	q=MIN(a);
	swap(q,&a[0]);
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
