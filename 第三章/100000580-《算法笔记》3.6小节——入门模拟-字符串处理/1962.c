#include <stdio.h>
int main(){
	char s[100][100],a[100],b[100];
	while(scanf("%s",s[0])!=EOF){
		int i,k=1;
		while(getchar()!='\n') //�����ַ�s 
			scanf("%s",s[k++]);
		scanf("%s",a);
		scanf("%s",b);
		for(i=0;i<k-1;i++){ //�ҳ����ʲ��滻
			if(strcmp(a,s[i])==0) printf("%s ",b); //˵�����
			else printf("%s ",s[i]);
		}
		if(strcmp(a,s[i])==0) printf("%s",b);
		else printf("%s",s[i]);
		printf("\n");
	} 
	return 0;
}
