/*6112
˼��
	- �������˳������ѯÿ�����ֳ��ֵĴ��� 
*/
#include <stdio.h> 
int main(){
	int N,str[100010]; //����Ҫ����100000����ֹ����Խ�� 
	while(scanf("%d",&N)!=EOF){
		int hashTable[100010]={0},i;
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
			hashTable[str[i]]++;
		}
		for(i=0;i<N;i++){
			if(hashTable[str[i]]==1){ //������˳���ѯ�Ƿ�ú�Ψһ 
				printf("%d\n",str[i]);
				break;
			}	
		}
		if(i==N)	printf("None\n");
	}
	return 0;
}



