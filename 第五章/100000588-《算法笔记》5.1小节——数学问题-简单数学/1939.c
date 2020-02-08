/*1939
思考
	- 它的平方的低位部分等于它本身。
	- 比如25的平方是625，低位部分是25，因此25是一个守形数。 
	- 由于N小于100，所以最多只需要检查它的平方的后两位是否等于它自己就行了。
*/
#include <stdio.h>
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		int noun=N*N;
		if(noun%100==N || noun%10==N)
			printf("Yes!\n");
		else	printf("No!\n");
	} 
	return 0;
}
