/*5901
˼��
	- ������������������һ����ֻ��Ҫ����һ��
	- ��ǰһ��������ַ�str[i]�����ڶ�Ӧλ�õ��ַ�str[len-1-i],��Ϊ����
	- ��֮���ǻ��� 
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
