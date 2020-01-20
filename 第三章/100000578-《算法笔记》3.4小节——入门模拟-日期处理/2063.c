#include <stdio.h>
int cmp(int year){
	return (year%4==0 && year%100!=0 || year%400==0);
}
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
	{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main(){
	int n,i,j,y,m,d,days;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d %d %d %d",&y,&m,&d,&days);
			for(j=0;j<days;j++){
				d++;
				if(d>month[m][cmp(y)]){  
					d=1;m++;  
				}
				if(m>12){
					y++;m=1;
				}
			}
			printf("%04d-%02d-%02d\n",y,m,d);
		}
	}
	return 0;
}
