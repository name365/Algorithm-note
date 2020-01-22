/*2064
思考
	- 字符串数组逆序输出的问题，用二维字符数组表示一个字符串数组。
	- 注意点是最多输入4个字符串，输入第i（假设i大于4）个字符串后，
	- 一次输出的分别是zi[i - 0],zi[i-1],zi[i-2],zi[i-3]。
	- 按照题目要求的1=zi[i - j]的格式输出。
	- 用变量first表示是否是第一个，若不是第一个，输出字符串之前要先输出一个空格。 
*/
#include <stdio.h>
int main(){
	int m,i,j;
	while(scanf("%d",&m)!=EOF){
		char zi[100][25];
		for(i=1;i<m+1;i++){
			scanf("%s",zi[i]);
			int k=i;
			for(j=1;j<=i;j++){
				if(j==i||j==4){
					printf("%d=%s\n",j,zi[k--]);
					break;
				}else{
					printf("%d=%s ",j,zi[k--]);
				}
			}
		}
	}
	return 0;
} 
