#include <stdio.h>
void change(int a[],int b[][5]){
	a[0]=1;
	a[1]=3;
	a[2]=5;
	b[0][0]=1;
}
int main(){
	int a[3]={0};
	int i,b[5][5]={0};
	change(a,b);
	for(i=0;i<3;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
