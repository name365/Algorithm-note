#include <stdio.h>
int main(){
	char a[100],b[100];
	int i;
	gets(a);	//���滻scanf("%s",a); 
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z')
			b[i]='Z'-a[i]+65;//��д��ĸA��ASCII��Ϊ65 
		else if(a[i]>='a'&&a[i]<='z')
			b[i]='z'-a[i]+97;//Сд��ĸa��ASCII��Ϊ97 
		else b[i]=a[i];
	}
	b[i]='\0';
	puts(b);	//���滻printf("%s",b); 
	return 0;
} 
