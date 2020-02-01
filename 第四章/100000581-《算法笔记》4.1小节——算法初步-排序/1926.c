/*1926
全题大意
	- 第1行包含两个整数 N (N<=100000) 和 C，其中 N 是纪录的条数，C 是指定排序的列号。
	- 以下有N行，每行包含一条学生纪录。
		- 每条学生纪录由学号（6位数字，同组测试中没有重复的学号）、
		- 姓名（不超过8位且不包含空格的字符串）、成绩（闭区间[0, 100]内的整数）组成，每个项目间用1个空格隔开。
		- 当读到 N=0 时，全部输入结束，相应的结果不要输出。 
	- 当 C=1 时，按学号递增排序；
	- 当 C=2时，按姓名的非递减字典序排序；
	- 当 C=3 时，按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。 
思考
	- 只需定义一个结构体与三个自定义函数
	- 再根据题意遍历输入输出即可 
*/
#include <stdio.h>
struct student {
	char name[10],id[10];
	int score;
}stu[100010]; //防止数组越界，必须大于100000 
int cmp(const void * a, const void * b) {//按学号递增排序
	struct student *aa = (struct student*)a; //相当于把结构体传了过去，再取里面的参数
	struct student *bb = (struct student*)b; //比较时用结构体声明新的指针变量
	return strcmp(aa->id,bb->id);
}
int cmp2(const void *a, const void *b) { //按姓名的非递减字典序排序
	struct student *aa = (struct student*)a;
	struct student *bb = (struct student*)b;
	int rel = strcmp(aa->name, bb->name);
	if (!rel) return strcmp(aa->id, bb->id);
	return rel;
}
int cmp3(const void *a, const void *b) { //按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。
	struct student *aa = (struct student*)a;
	struct student *bb = (struct student*)b;
	int rel = aa->score - bb->score; 
	if (!rel) return strcmp(aa->id, bb->id);
	return rel;
}
int main() {
	int n,i,c,flag=1;
	while(scanf("%d %d",&n,&c)!=EOF){
		if(n==0) return 0;
		for(i=0;i<n;i++){
			scanf("%s %s %d",stu[i].id,stu[i].name,&stu[i].score);
		}
		if(c==1)	qsort(stu,i,sizeof(struct student),cmp);
		if(c==2)	qsort(stu,i,sizeof(struct student),cmp2);
		if(c==3)	qsort(stu,i,sizeof(struct student),cmp3);
		printf("Case %d:\n",flag++);
		for(i=0;i<n;i++){
			printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].score);
		}
	}
	return 0;	
}

