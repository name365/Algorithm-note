#include <stdio.h>
typedef struct{  //�������ڱ�ʾѧ���Ľṹ��
    char num[10];
    char name[100];
    char sex[5];
    int age;
}S;
int main(){
	int n,m,i,j,k;
	S d[10010];
	while(scanf("%d",&n)!=EOF){ //������ԣ���Ȼ�޷�ͨ�� 
		for(i=0;i<n;i++){
			scanf("%s %s %s %d",d[i].num,d[i].name,d[i].sex,&d[i].age);
		}
		scanf("%d",&m);
		char a[10];
		for(j=0;j<m;j++){
	        scanf("%s",a);
	        int gt=-1;  //Ŀ��Ԫ���±꣬��ʼ��Ϊ-1
	    	for(k=0;k<n;k++){
	        	if(strcmp(d[k].num,a)==0)  gt=k; //strcmp()�������������ֵ = 0�����ʾd[k].num���� a�� 
	        }
			if(gt==-1)	printf("No Answer!\n"); //������ʧ�� 
			else	printf("%s %s %s %d\n",d[gt].num,d[gt].name,d[gt].sex,d[gt].age);	//�����ҳɹ�	
		}
	}
	return 0;
}
