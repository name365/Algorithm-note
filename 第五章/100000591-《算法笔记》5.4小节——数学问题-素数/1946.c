/*1946
思考
	- 输出第k个素数，k<=10000 
*/ 
#include <stdio.h>
typedef int bool;
#define false 0
#define true  1
int i,j;
int prime[1000001],pNum=0;
bool p[1000001]={0};
void Find_Prime(){
	for(i=2;i<1000001;i++){
		if(p[i]==false){
			prime[pNum++] = i;
			for(j=i+i;j<1000001;j+=i){
				p[j]=true;
			}
		}
	}
}
int main(){
	Find_Prime();
	int m;
	while(~scanf("%d",&m)){
		printf("%d ",prime[m-1]);
	}
	return 0;
} 
