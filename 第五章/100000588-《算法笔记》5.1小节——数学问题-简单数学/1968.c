/*1968
思考
	- 输入20个数，每个数都在1-10之间，求1-10中的众数
	- （众数就是出现次数最多的数，如果存在一样多次数的众数，则输出权值较小的那一个）。
	- 注意如果存在一样多次数的众数，则输出权值较小的那一个。
*/
#include <stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int str[12]={0};
		str[n]++;
		for(i=1;i<20;i++){
			scanf("%d",&n);
			str[n]++;
		}
		int temp=0,max=str[0];
		for(i=1;i<11;i++){
			if(str[i]>max){
				max=str[i];
				temp=i;
			}
		}
		printf("%d\n",temp);
	}
	return 0;
} 
