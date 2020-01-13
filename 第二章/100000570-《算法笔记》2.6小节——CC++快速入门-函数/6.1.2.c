#include <stdio.h>
void vowels(char s1[], char s2[]){
	int cnt=strlen(s1),j=0,i;
	for(i=0;i<cnt;i++){
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'){
			s2[j++]=s1[i];
		}
	}
	int n=strlen(s2);
	for(i=0;i<n;i++){
		printf("%c",s2[i]);
	} 	
}
int main(){
	char s1[100]={0},s2[100]={0};
	gets(s1);
	vowels(s1,s2);
	return 0;
}
