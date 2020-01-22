#include <stdio.h>
int main(){
	char cmp[100];
	while(gets(cmp)){
		int i=0;
		if(cmp[i]>='a'&&cmp[i]<='z'){ //第一个首字母为大写 
			cmp[i]=cmp[i]-32;
		}
		for(i=1;cmp[i]!='\0';i++){ //遍历字符 
			if(cmp[i]==' '|| cmp[i]=='\t'||cmp[i]=='\r'){
				if(cmp[i+1]>='a'&&cmp[i+1]<='z'){
					cmp[i+1]=cmp[i+1]-32;
				}
			} 
		}
		printf("%s\n",cmp);		
	}
	return 0;
} 
