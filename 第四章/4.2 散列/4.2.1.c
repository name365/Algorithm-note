#include <stdio.h>
//const int maxn=100010;
typedef int bool; //�Զ���bool��C����bool,c++�У����Զ��� 
#define false 0
#define true  1
bool hashTable[10010] = {false};
int main(){
	int i,n,m,x;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		hashTable[x]=true; //����x���ֹ� 
	}
	for(i=0;i<m;i++){
		scanf("%d",&x);
		if(hashTable[x] == true){ //�������X���ֹ��������YES 
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	} 
	return 0;
}
