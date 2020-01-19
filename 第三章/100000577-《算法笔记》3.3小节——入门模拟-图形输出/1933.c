/*1933
思考：每层以2为序递增的。 
*/
#include <stdio.h>
int main(){
	int h,i,j;
	while(scanf("%d",&h)!=EOF){
		for(i=0;i<h;i++){ //行数 
			for(j=0;j<2*(h-1-i);j++){ //每行有空格2*(h-1-i)个 
				printf(" ");
			} 
			for(j=0;j<2*i+h;j++){ //每行有*，2*i+h个 
				printf("*");
			}
			printf("\n"); 
		}
	}
	return 0;
} 
