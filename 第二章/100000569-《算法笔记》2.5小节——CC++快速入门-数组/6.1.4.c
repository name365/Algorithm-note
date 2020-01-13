#include <stdio.h>
int main(){
	char a[100],b[100];
	int i;
	gets(a);	//可替换scanf("%s",a); 
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z')
			b[i]='Z'-a[i]+65;//大写字母A的ASCII码为65 
		else if(a[i]>='a'&&a[i]<='z')
			b[i]='z'-a[i]+97;//小写字母a的ASCII码为97 
		else b[i]=a[i];
	}
	b[i]='\0';
	puts(b);	//可替换printf("%s",b); 
	return 0;
} 
