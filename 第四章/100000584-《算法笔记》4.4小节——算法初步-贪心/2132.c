/*2132
思考
	- 在第一行中，有上述两个整数L(0<L<1000000000)和N(0<=N<600)。
	- 在第二行中，有N个正整数。第i个整数Ai(0<Ai<1000000000)表示第i个块的大小为1×Ai(以英寸为单位)。
	- 打印一个整数，表示所需的最小块数。如果凯蒂修不好墙，只需打印“impossible”即可。 
	- 将输入的N个整数进行从大到小排序，确定达到裂缝矩形所需的面积的最小块数 
*/
#include <stdio.h>
int cmp(const void *a,const void *b){ //从大到小排序 
	return *(int*)b - *(int*)a;
}
int main(){
	int L,N,i;
	while(scanf("%d %d",&L,&N)!=EOF){
		int sum=L,str[N];
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
		}
		qsort(str,N,sizeof(int),cmp); //排序木板大小 
		for(i=0;i<N;i++){ //遍历木板大小，获取最小块数 
			sum=sum-str[i];
			if(sum<=0)	break;
		}
		if(sum>0)	printf("impossible\n"); //如果无法修复 
		else	printf("%d\n",i+1);
	}
	return 0;
} 
