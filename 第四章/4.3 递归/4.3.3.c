#include <stdio.h>
typedef int bool;
#define false 0
#define true  1
int n,P[11],hashTable[11]={false};
void generateP(int index){
	int i,x;
	if(index==n+1){
		for(i=1;i<=n;i++){
			printf("%d",P[i]);
		}
		printf("\n");
		return;
	}
	for(x=1;x<=n;x++){
		if(hashTable[x]==false){
			P[index]=x;
			hashTable[x]=true;
			generateP(index+1);
			hashTable[x]=false;
		}
	}
}
int main(){
	n=3;
	generateP(1);
	return 0;
}
