#include <stdio.h>
typedef struct{  //定义用于表示学生的结构体
    char num[10];
    char name[100];
    char sex[5];
    int age;
}S;
int main(){
	int n,m,i,j,k;
	S d[10010];
	while(scanf("%d",&n)!=EOF){ //多组测试，不然无法通过 
		for(i=0;i<n;i++){
			scanf("%s %s %s %d",d[i].num,d[i].name,d[i].sex,&d[i].age);
		}
		scanf("%d",&m);
		char a[10];
		for(j=0;j<m;j++){
	        scanf("%s",a);
	        int gt=-1;  //目标元素下标，初始化为-1
	    	for(k=0;k<n;k++){
	        	if(strcmp(d[k].num,a)==0)  gt=k; //strcmp()函数，如果返回值 = 0，则表示d[k].num等于 a。 
	        }
			if(gt==-1)	printf("No Answer!\n"); //若查找失败 
			else	printf("%s %s %s %d\n",d[gt].num,d[gt].name,d[gt].sex,d[gt].age);	//若查找成功	
		}
	}
	return 0;
}
