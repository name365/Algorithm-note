/*求解100以内的所有素数 ——筛法	
*/
#include <stdio.h>
#include <math.h>
typedef int bool;
#define false 0
#define true  1
int i,j;
int prime[101],pNum=0;
bool p[101]={0};
void Find_Prime(){
	for(i=2;i<101;i++){
		if(p[i]==false){
			prime[pNum++] = i;
			for(j=i+i;j<101;j+=i){
				p[j]=true;
			}
		}
	}
}
int main(){
	Find_Prime();
	for(i=0;i<pNum;i++){
		printf("%d ",prime[i]);
	}
	return 0;
} 

