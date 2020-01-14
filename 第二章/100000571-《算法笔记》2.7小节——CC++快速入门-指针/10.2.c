#include <stdio.h>
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
} 
int main(){
	int a,b,c,*p1=&a,*p2=&b,*p3=&c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b) swap(p1,p2);
	if(a<c) swap(p1,p3);
	if(b<c) swap(p2,p3);
	swap(p1,p3);
	printf("%d %d %d\n",*p3,*p2,*p1);
	return 0;
}
