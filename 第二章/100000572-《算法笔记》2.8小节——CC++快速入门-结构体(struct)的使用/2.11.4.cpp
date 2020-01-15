#include <stdio.h>
int i;
struct stuy{
	int num;
    char name[10];
    int score1;
    int score2;
    int score3;
};
void input(stuy *s){
	for(i=0;i<5;i++){
		scanf("%d %s %d %d %d",&s[i].num,s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
	}
}
void output(stuy *s){
	for(i=0;i<5;i++){
		printf("%d %s %d %d %d\n",s[i].num,s[i].name,s[i].score1,s[i].score2,s[i].score3);
	}
}
int main(){
	stuy s[5];
	input(s);
	output(s);
	return 0;
}
