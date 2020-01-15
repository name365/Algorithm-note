#include <stdio.h>
struct strd{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int clas;
        char position[10];
    }category;
};
int main(){
	int n,i;
	scanf("%d",&n);
	strd str[100];
	for(i=0;i<n;i++){
		scanf("%d %s %c %c",&str[i].num,str[i].name,&str[i].sex,&str[i].job);
		if(str[i].job=='s')
			scanf("%d",&str[i].category.clas);
		else
			scanf("%s",str[i].category.position);
	}
	for(i=0;i<n;i++){
		if(str[i].job=='s')
			printf("%d %s %c %c %d\n",str[i].num,str[i].name,str[i].sex,str[i].job,str[i].category.clas);
		else
			printf("%d %s %c %c %s\n",str[i].num,str[i].name,str[i].sex,str[i].job,str[i].category.position);
	}
	return 0;
}
