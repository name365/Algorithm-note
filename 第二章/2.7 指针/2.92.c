#include <stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10},*p;
	for(p=a;p<a+10;p++){
		printf("%d ",*p);
	}
	return 0;
}
