/*5901
思考
	- 回文数字正读反读都一样，只需要遍历一半
	- 当前一半的所有字符str[i]都等于对应位置的字符str[len-1-i],即为回文
	- 反之则不是回文 
*/
#include <stdio.h>
int main(){
	char str[256];
	scanf("%s",str);
	int i,len=strlen(str),n=0;
	for(i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i])
			n=1;
	}
	if(n) printf("NO\n");
	else printf("YES\n");
	return 0;
} 
