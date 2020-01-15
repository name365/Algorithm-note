#include<stdio.h>
typedef struct {
	int num;
	char name[10];
	int score1;
	int score2;
	int score3;	
}sam;
int main(){
	int aver[10],max=0,k=0,i;
	sam s[10];
	double sco1=0,sco2=0,sco3=0;
	for(i=0;i<10;i++){
		scanf("%d %s %d %d %d",&s[i].num,s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
		sco1+=s[i].score1;
		sco2+=s[i].score2;
		sco3+=s[i].score3;
		aver[i]= s[i].score1+s[i].score2+s[i].score3;
	}
	sco1/=10;sco2/=10;sco3/=10;
	for(i=0;i<10;i++){
		if(aver[i]>max){
			max=aver[i];
			k=i;
		}
	}
	printf("%.2lf %.2lf %.2lf\n",sco1,sco2,sco3);
	printf("%d %s %d %d %d\n",s[k].num,s[k].name,s[k].score1,s[k].score2,s[k].score3);
	return 0;
}
