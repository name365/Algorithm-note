/*2043
˼��
	- ���հ��������Ӵ�С��˳���������ͷ��ñ�ӵ���ɫ
	- ������һ���Զ��庯����һ���ṹ��
	- �ṹ��洢���ݡ��Զ���Ӵ�С���� 
	- ע��Խ�������Ҫ�� 
*/
#include <stdio.h>
struct Mouse{
	int weight;
	char color[15];
}mon[110]; 
int cmp( const void *a , const void *b )  //�Ӵ�С���� 
{
	return *(int *)b - *(int *)a;  
}
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		for(i=0;i<N;i++){
			scanf("%d %s",&mon[i].weight,mon[i].color);
		}
		qsort(mon,N,sizeof(struct Mouse),cmp); //��һλ�Ǵ���������飬�ڶ�λ��������������λ��ÿ������λ�Ĵ�С�����ĸ��ǹ���
		for(i=0;i<N;i++){
			printf("%s\n",mon[i].color);
		}
	}
	return 0;
} 
