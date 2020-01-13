#include <stdio.h>
void cmp(char str[]){
	int i;
	for(i=3;i>=0;i--){
		printf("%c",str[i]);
	}
}
int main(){
	char str[100];
	gets(str);
	cmp(str);
	return 0;
} 
