/*2088
思考
	- 找出最后通过分数线的考生，并将他们的成绩按降序打印。
	- 第1行给出考生人数N ( 0 < N < 1000 )、考题数M ( 0 < M < = 10 )、分数线（正整数）G；
	- 第2行排序给出第1题至第M题的正整数分值；
	- 以下N行，每行给出一名考生的准考证号（长度不超过20的字符串）、
	- 该生解决的题目总数m、以及这m道题的题号（题目号由1到M）。 
	- 当读入的考生人数为0时，输入结束，该场考试不予处理。 
	- 第1行输出不低于分数线的考生人数n，
	- 随后n行按分数从高到低输出上线考生的考号与分数，其间用1空格分隔。
	- 若有多名考生分数相同，则按他们考号的升序输出。 
*/ 
#include <stdio.h>
struct student{
	char id[25]; //考生的准考证号（长度不超过20的字符串） 
	int score,sum,number[11]; //考生的成绩、解决题目总数、解决的题号 
}stu[1010];
int cmp(const void * a, const void * b) {
	struct student *aa = (struct student*)a; //相当于把结构体传了过去，再取里面的参数
	struct student *bb = (struct student*)b; //比较时用结构体声明新的指针变量
	if(aa->id != bb->id)	return aa->id > bb->id; //按成绩降序排序
	else return strcmp(aa->id,bb->id)<0; //分数相同，则按他们考号的升序输出。 
}
int main(){
	int N,M,G,i,j;
	while(scanf("%d",&N)!=EOF && (N!=0)){ //考生数 
		scanf("%d %d",&M,&G); //考题数、分数线 
		int num[10],count=0;
		for(i=1;i<M+1;i++){
			scanf("%d",&num[i]); //第1题至第M题的正整数分值 
		}
		for(i=0;i<N;i++){
			stu[i].score=0;
			scanf("%s %d",stu[i].id,&stu[i].sum); //每位考生的准考证号、解决的考题总数 
			for(j=0;j<stu[i].sum;j++){
				scanf("%d",&stu[i].number[j]); //每道题的题号 
				stu[i].score += num[stu[i].number[j]]; //求总分 
			}
			if(stu[i].score>=G)	count++; //统计及格数 
		}
		printf("%d\n",count);
		qsort(stu,N,sizeof(int),cmp);
		for(i=0;i<N;i++){
			printf("%s %d\n",stu[i].id,stu[i].score);
		}
	}
	return 0;
} 
