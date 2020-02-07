#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++){
		printf("%d ",(int)(round(1.0*rand()/RAND_MAX*50000+10000)));
	}
	return 0;
} 
