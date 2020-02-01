#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct student{
	char id[10];
	char name[10];
	int score;
}stu[100000];
bool cmp(student a, student b){
		return strcmp(a.id, b.id) < 0;
}
bool cmp2(student a, student b){
	if(strcmp(a.name, b.name) != 0)	return strcmp(a.name, b.name) < 0;
	else	return strcmp(a.id, b.id) < 0;
}
bool cmp3(student a, student b){
	if(a.score != b.score)	return a.score < b.score;
	else	return strcmp(a.id, b.id) < 0;
}
int main() {
	int N,C,i = 1,j;
	while(scanf("%d", &N) != EOF) {
		if(N == 0)	return 0;
		scanf("%d", &C);
		for(j = 0; j < N; j++) {
			scanf("%s %s %d", stu[j].id, stu[j].name, &stu[j].score);
		}
		if(C == 1)	sort(stu, stu + N, cmp);
		if(C == 2)	sort(stu, stu + N, cmp2);
		if(C == 3)	sort(stu, stu + N, cmp3);
		printf("Case %d:\n", i++);
		for(j = 0; j < N; j++) {
			printf("%s %s %d\n", stu[j].id, stu[j].name, stu[j].score);
		}
	}
	return 0;
}

