#include <stdio.h>
int main(){
	int h,i,j,m;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&h);
		for(i=0;i<h;i++){
			for(j=0;j<h-i-1;j++){ //Êä³ö¿Õ¸ñ 
				printf(" ");
			}
			for(j=0;j<h+2*i;j++){ //Êä³ö·ûºÅ 
				printf("*");
			} 
			printf("\n"); 
		}
	}
	return 0;
}
