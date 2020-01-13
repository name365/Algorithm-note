#include <stdio.h>
int main(){
	char s1[100],s2[100];
	int a=0,b=0,i=0,j=0;
	gets(s1);
	gets(s2);
	while(s1[i]!='\0')	a+=s1[i++];
	while(s2[j]!='\0')	b+=s2[j++];
	printf("%d\n",a-b);
	return 0;
}
