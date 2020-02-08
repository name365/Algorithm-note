/*1958
思考
	- 设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，
	- 且有：abc+bcc=532。求满足条件的所有a、b、c的值。
*/
#include <stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				int sum=i*100+j*10+k+j*100+k*10+k;
				if(sum==532)	printf("%d %d %d\n",i,j,k);
			}
		}
	}
	return 0;
} 
