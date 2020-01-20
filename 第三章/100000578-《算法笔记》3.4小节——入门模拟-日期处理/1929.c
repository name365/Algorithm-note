/*
基姆拉尔森计算公式
	W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7
	在公式中d表示日期中的日数，m表示月份数，y表示年数。

注意：在公式中有个与其他公式不同的地方：
	  把一月和二月看成是上一年的十三月和十四月，
	  例：如果是2004-1-10则换算成：2003-13-10来代入公式计算。
*/
#include <stdio.h>
char *week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

char *month[]={"January","February","March","April","May","June",
	"July","August","September","October","November","December"};

int main(){
	int y,m,d,i;
	char mon[15];
	while(scanf("%d %s %d",&d,mon,&y)!=EOF){
		for(i=0;i<12;i++) //遍历寻找月份，将月份转换为数字 
			if(!strcmp(mon,month[i])) break;
		m=i+1;
		if(m==1||m==2) { //替换成上一年的十三月和十四月条件清除 
			m+=12;y--;
		}
		int a = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7; //套用公式，计算星期 
		printf("%s\n",week[a]);
	}
	return 0;
}
