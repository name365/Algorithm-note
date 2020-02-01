/*1927
思考
	- 注意输入的字符串中可能有空格。使用gets()函数读入字符串
	- 定义一个自定义字符排序函数 
*/
#include <stdio.h>
int cmp( const void *a , const void *b ) 
{ 
  return *(char *)a - *(char *)b; 
} 
int main(){
	char word[210]; //注意防止越界 
	while(gets(word)!=NULL){
		int len=strlen(word);
		qsort(word,len,sizeof(word[0]),cmp); 
		printf("%s\n",word);
	} 
	return 0;
} 
