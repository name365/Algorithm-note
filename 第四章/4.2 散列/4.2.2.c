#include <stdio.h>
//const int maxn=100010;
int hashTable[10010] = {0};
int main(){
	int i,n,m,x;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		hashTable[x]++;  
	}
	for(i=0;i<m;i++){
		scanf("%d",&x);
		printf("%d\n",hashTable[x]);
	} 
	return 0;
} 
