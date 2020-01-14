#include <stdio.h>
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
} 
int main(){
	int a,b,*p1=&a,*p2=&b;
	scanf("%d %d",&a,&b);
	swap(p1,p2);
	printf("%d %d\n",*p1,*p2);
	return 0;
}
