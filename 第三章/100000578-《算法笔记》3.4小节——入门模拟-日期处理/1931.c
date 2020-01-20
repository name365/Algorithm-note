#include <stdio.h>
int main(){
	int y,n,i;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d %d",&y,&n)!=EOF){
		if(y%4==0 && y%100!=0 || y%400==0) //判断是否为闰年 
			days[1]=29;
		else 
			days[1]=28;
		for(i=0;i<n;i++){ //计算号数 
			if(n<=days[i]) break;
			n -= days[i];
		}
		printf("%04d-%02d-%02d\n",y,i+1,n);
	}
	return 0;
} 
