/*2066
思考
	- 按从小到大排。 
*/
#include <stdio.h>
#define bool int //自定义调用bool 
#define false 0
#define true 1
int hashTable[1005][1005];
int main(){
	int m,n,num,str[110],i,j;
	while(scanf("%d",&m)!=EOF){
		while(m--){
			scanf("%d",&n);
			for(i=0;i<n;i++){
				scanf("%d",&str[i]);
				hashTable[0][str[i]]=1; //表示这一列数据需要输出 
			}
			for(i=0;i<n;i++){
				scanf("%d",&num);
				hashTable[num][str[i]]++;
				if(hashTable[num][0]==0)	hashTable[num][0]=1; //表示这一列(组)需要输出 
			}
			for(i=1;i<1005;i++){
				if(hashTable[i][0]==1){ //说明存在第i组
					printf("%d={",i);
					bool flag=false; //控制逗号 
					for(j=1;j<1005;j++){
						if(hashTable[0][j]==1) { //说明这一列需要输出
							if(flag)	printf(","); //控制逗号 
							else	flag=true;
							printf("%d=%d",j,hashTable[i][j]);
						}
					}
					printf("}\n");
				}
			}
			memset(hashTable,0,sizeof(hashTable)); //重置哈希表
		}
	}
	return 0;
}
