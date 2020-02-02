/*6120
思考
	- 题目大意给定两个字符串，将字符串里1中有字符串2中的字母都去除掉
	- 需要注意的是，只有一个输入案例，最后一行不能换行，不然输出超限  
*/ 
#include <stdio.h>
int main(){
	char str[10010],str2[10010];
	int i;
	gets(str);gets(str2);
	int hashTable[128]={0}; //ASCII码对应的整型数只有0-127
	for(i=0;i<strlen(str2);i++){
		hashTable[str2[i]]++;
	} 
	for(i=0;i<strlen(str);i++){ //模拟s1-s2 
		if(hashTable[str[i]]==0)
			printf("%c",str[i]);
	}
	return 0;
} 
