/*2066
˼��
	- ����С�����š� 
*/
#include <stdio.h>
#define bool int //�Զ������bool 
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
				hashTable[0][str[i]]=1; //��ʾ��һ��������Ҫ��� 
			}
			for(i=0;i<n;i++){
				scanf("%d",&num);
				hashTable[num][str[i]]++;
				if(hashTable[num][0]==0)	hashTable[num][0]=1; //��ʾ��һ��(��)��Ҫ��� 
			}
			for(i=1;i<1005;i++){
				if(hashTable[i][0]==1){ //˵�����ڵ�i��
					printf("%d={",i);
					bool flag=false; //���ƶ��� 
					for(j=1;j<1005;j++){
						if(hashTable[0][j]==1) { //˵����һ����Ҫ���
							if(flag)	printf(","); //���ƶ��� 
							else	flag=true;
							printf("%d=%d",j,hashTable[i][j]);
						}
					}
					printf("}\n");
				}
			}
			memset(hashTable,0,sizeof(hashTable)); //���ù�ϣ��
		}
	}
	return 0;
}
