/*2132
˼��
	- �ڵ�һ���У���������������L(0<L<1000000000)��N(0<=N<600)��
	- �ڵڶ����У���N������������i������Ai(0<Ai<1000000000)��ʾ��i����Ĵ�СΪ1��Ai(��Ӣ��Ϊ��λ)��
	- ��ӡһ����������ʾ�������С��������������޲���ǽ��ֻ���ӡ��impossible�����ɡ� 
	- �������N���������дӴ�С����ȷ���ﵽ�ѷ����������������С���� 
*/
#include <stdio.h>
int cmp(const void *a,const void *b){ //�Ӵ�С���� 
	return *(int*)b - *(int*)a;
}
int main(){
	int L,N,i;
	while(scanf("%d %d",&L,&N)!=EOF){
		int sum=L,str[N];
		for(i=0;i<N;i++){
			scanf("%d",&str[i]);
		}
		qsort(str,N,sizeof(int),cmp); //����ľ���С 
		for(i=0;i<N;i++){ //����ľ���С����ȡ��С���� 
			sum=sum-str[i];
			if(sum<=0)	break;
		}
		if(sum>0)	printf("impossible\n"); //����޷��޸� 
		else	printf("%d\n",i+1);
	}
	return 0;
} 
