#include<stdio.h>
struct student{
	int num;
	char name[20];
	char sex;
	int age;
};
int main(){
	int n,i;
	scanf("%d",&n);
	student stu[20];
	for(i=0;i<n;i++){
		scanf("%d %s %c %d",&stu[i].num,stu[i].name,&stu[i].sex,&stu[i].age);
	}
	for(i=0;i<n;i++){
		printf("%d %s %c %d\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age);
	}
	return 0;
}
