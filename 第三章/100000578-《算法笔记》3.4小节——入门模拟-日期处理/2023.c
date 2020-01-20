/*2026
思考
	- 求输入的日期的后一天，需考虑是否为闰年
	- 这里用判断使代码更简洁，超过28、29、30、31中的任意一数，则进入下一月份
	- 超过12月份，则年数加一，月份和日期都变为一
*/ 
#include <stdio.h>
int main(){
	int n,i,y,m,d;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d %d %d",&y,&m,&d);
		if(m<12&&(d<28||d<29||d<30||d<31)) 
			d++;
		else {
			d=1;m++;
		}
		if(m>12){
			y++;m=1;d=1;
		}
		printf("%04d-%02d-%02d\n",y,m,d);
		}
	}
	return 0;
} 
