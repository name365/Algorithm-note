/*2025
思考
	- 只需一个strlen()函数计算字符串长度 
*/
#include <stdio.h>
int main(){
	char A[100],B[100];
	int m;
	while(scanf("%d",&m)!=EOF){
		while(m--){
			scanf("%s %s",A,B);
			if(strlen(A)==strlen(B)){
				printf("%s is equal long to %s\n",A,B);
			}else if(strlen(A)>strlen(B)){
				printf("%s is longer than %s\n",A,B);
			}else{
				printf("%s is shorter than %s\n",A,B);
			}
		}		
	}
	return 0;
} 
