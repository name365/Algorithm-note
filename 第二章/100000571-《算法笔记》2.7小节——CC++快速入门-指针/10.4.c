#include <stdio.h>
void swap(char* a,char* b){
	char temp=*a;
	*a=*b;
	*b=temp;
} 
int main(){
	char a[50],b[50],c[50];
	gets(a);gets(b);gets(c);
	char *p1=a,*p2=b,*p3=c;
	if(strcmp(p1,p2)>0) swap(&p1,&p2);
	if(strcmp(p1,p3)>0) swap(&p1,&p3);
	if(strcmp(p2,p3)>0) swap(&p2,&p3);
	printf("%s\n%s\n%s\n",p1,p2,p3);
	return 0;
}
