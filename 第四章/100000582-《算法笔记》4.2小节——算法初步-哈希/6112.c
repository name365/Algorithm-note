/*6112
思考
	- 按输入的顺序来查询每个数字出现的次数 
*/
#include <stdio.h> 
int main(){
	int N,str[100010]; //数据要大于100000，防止数组越界 
	while(scanf("%d",&N)!=EOF){
		int hashTable[100010]={0},i;
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
			hashTable[str[i]]++;
		}
		for(i=0;i<N;i++){
			if(hashTable[str[i]]==1){ //按输入顺序查询是否该号唯一 
				printf("%d\n",str[i]);
				break;
			}	
		}
		if(i==N)	printf("None\n");
	}
	return 0;
}



