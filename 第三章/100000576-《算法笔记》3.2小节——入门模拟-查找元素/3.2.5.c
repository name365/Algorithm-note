#include <stdio.h>
typedef struct{  //定义用于表示学生的结构体
    int num;
    char name[50];
    char sex[10];
    int age;
}S;
int main(){
	int m,n,i,a,k;
	S d[100];
	scanf("%d",&m);
	for(k=0;k<m;k++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %s %s %d",&d[i].num,d[i].name,d[i].sex,&d[i].age);
		}
		scanf("%d",&a);
		for(i=0;i<n;i++){
			if(a==d[i].num){
				printf("%d %s %s %d\n",d[i].num,d[i].name,d[i].sex,d[i].age);
				break;
			}
		}
	}	
	return 0;
}
