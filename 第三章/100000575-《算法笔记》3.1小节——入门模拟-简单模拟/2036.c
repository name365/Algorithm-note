/*2036
	- ���б����ж��Ƿ�Ϊż�����ֱ����ż���� 
*/
#include <stdio.h>
int main(){
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
		int k[1001]={0},a=0,b=0; //k[i]�洢ÿ�����ݵ�n������ 
		for(i=0;i<n;i++){
			scanf("%d",&k[i]);
			if(k[i]%2==0) a++; //�ж��Ƿ�Ϊż�� 
			else b++;
		}
		if(a>b) printf("NO\n"); //ż���������࣬���NO 
		else printf("YES\n");
	}
	return 0;
} 
