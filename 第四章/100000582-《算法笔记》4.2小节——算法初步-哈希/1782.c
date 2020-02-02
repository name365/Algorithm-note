/*1782
思考
	- 第一行两个整数N,M，2 <= N ，M<= 200。
	- 把N个读者依次编号为1,2,…,N，把M本书依次编号为1,2,…,M
	- 有N行，第i(i = 1,2,…,N)行每一行有一个数，表示读者i-1最喜欢的图书的编号P(1<=P<=M)
	- 如果i和任何人都没有共同喜欢的书，则输出“BeiJu”（即悲剧，^ ^） 
*/
#include <stdio.h>
int main(){
	int N,M,i;
	while(scanf("%d %d",&N,&M)!=EOF){
		int str[200]={0},num[1010]={0}; //第i个读者---str[i]对应的书号，i代表书号---num[i]读此书的人数
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
			num[str[i]]++;
		}
		for(i=0;i<N;i++){
			if(num[str[i]]==1)	printf("BeiJu\n");
			else	printf("%d\n",num[str[i]]-1);
		}
	} 
	return 0;
}
