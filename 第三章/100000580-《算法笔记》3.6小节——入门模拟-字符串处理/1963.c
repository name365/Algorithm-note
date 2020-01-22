/*1963
思考
	- 用gets()函数与getchar()函数分别读入字符串与字符
	- 遍历判断字符串如果不相等则输出对应的字符，相等则跳过输出
	- 这里用换行符表示跳过 
*/
#include <stdio.h>
int main(){
	char s[100000],c;
	while(gets(s)!=NULL){
		c=getchar();
		int i;
		for(i=0;i<strlen(s);i++){
			if(s[i]!=c) printf("%c",s[i]);
			if(i==strlen(s)-1) printf("\n");
		} 
		getchar(); //吸收掉换行符 
	}
	return 0;
}
