/*2088
˼��
	- �ҳ����ͨ�������ߵĿ������������ǵĳɼ��������ӡ��
	- ��1�и�����������N ( 0 < N < 1000 )��������M ( 0 < M < = 10 )�������ߣ���������G��
	- ��2�����������1������M�����������ֵ��
	- ����N�У�ÿ�и���һ��������׼��֤�ţ����Ȳ�����20���ַ�������
	- �����������Ŀ����m���Լ���m�������ţ���Ŀ����1��M���� 
	- ������Ŀ�������Ϊ0ʱ������������ó����Բ��账�� 
	- ��1����������ڷ����ߵĿ�������n��
	- ���n�а������Ӹߵ���������߿����Ŀ���������������1�ո�ָ���
	- ���ж�������������ͬ�������ǿ��ŵ���������� 
*/ 
#include <stdio.h>
struct student{
	char id[25]; //������׼��֤�ţ����Ȳ�����20���ַ����� 
	int score,sum,number[11]; //�����ĳɼ��������Ŀ�������������� 
}stu[1010];
int cmp(const void * a, const void * b) {
	struct student *aa = (struct student*)a; //�൱�ڰѽṹ�崫�˹�ȥ����ȡ����Ĳ���
	struct student *bb = (struct student*)b; //�Ƚ�ʱ�ýṹ�������µ�ָ�����
	if(aa->id != bb->id)	return aa->id > bb->id; //���ɼ���������
	else return strcmp(aa->id,bb->id)<0; //������ͬ�������ǿ��ŵ���������� 
}
int main(){
	int N,M,G,i,j;
	while(scanf("%d",&N)!=EOF && (N!=0)){ //������ 
		scanf("%d %d",&M,&G); //�������������� 
		int num[10],count=0;
		for(i=1;i<M+1;i++){
			scanf("%d",&num[i]); //��1������M�����������ֵ 
		}
		for(i=0;i<N;i++){
			stu[i].score=0;
			scanf("%s %d",stu[i].id,&stu[i].sum); //ÿλ������׼��֤�š�����Ŀ������� 
			for(j=0;j<stu[i].sum;j++){
				scanf("%d",&stu[i].number[j]); //ÿ�������� 
				stu[i].score += num[stu[i].number[j]]; //���ܷ� 
			}
			if(stu[i].score>=G)	count++; //ͳ�Ƽ����� 
		}
		printf("%d\n",count);
		qsort(stu,N,sizeof(int),cmp);
		for(i=0;i<N;i++){
			printf("%s %d\n",stu[i].id,stu[i].score);
		}
	}
	return 0;
} 
