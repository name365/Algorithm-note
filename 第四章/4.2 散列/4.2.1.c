#include <stdio.h>
//const int maxn=100010;
typedef int bool; //自定义bool，C中无bool,c++有，需自定义 
#define false 0
#define true  1
bool hashTable[10010] = {false};
int main(){
	int i,n,m,x;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		hashTable[x]=true; //数字x出现过 
	}
	for(i=0;i<m;i++){
		scanf("%d",&x);
		if(hashTable[x] == true){ //如果数字X出现过，则输出YES 
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	} 
	return 0;
}
