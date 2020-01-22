/*1067
思考
	- 注意输入的字符串可能会有空格。所以用putchar()函数输出 
*/
#include <stdio.h>
int main(){
	char zi[210];
	while(gets(zi)!=NULL){
		int i;
		for(i=strlen(zi)-1;i>=0;i--){
			putchar(zi[i]);
		}
		printf("\n");
	}
	return 0;
} 
