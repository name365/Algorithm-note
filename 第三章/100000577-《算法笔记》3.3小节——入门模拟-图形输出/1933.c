/*1933
˼����ÿ����2Ϊ������ġ� 
*/
#include <stdio.h>
int main(){
	int h,i,j;
	while(scanf("%d",&h)!=EOF){
		for(i=0;i<h;i++){ //���� 
			for(j=0;j<2*(h-1-i);j++){ //ÿ���пո�2*(h-1-i)�� 
				printf(" ");
			} 
			for(j=0;j<2*i+h;j++){ //ÿ����*��2*i+h�� 
				printf("*");
			}
			printf("\n"); 
		}
	}
	return 0;
} 
