/*1026
ȫ����� 
	- ÿ�����������ĵ�1�а����������� N (N<=100000) �� C������ N �Ǽ�¼��������C ��ָ��������кš�
	- ������N�У�ÿ�а���һ��ѧ����¼��
	- ÿ��ѧ����¼��ѧ�ţ�6λ���֣�ͬ�������û���ظ���ѧ�ţ���������������8λ�Ҳ������ո���ַ��������ɼ���������[0, 100]�ڵ���������ɣ�
	- ÿ����Ŀ����1���ո������ 
	- ��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ����
	- ����� N ���������Ҫ�������Ľ��������
		- �� C=1 ʱ����ѧ�ŵ�������
		- �� C=2ʱ���������ķǵݼ��ֵ�������
		- �� C=3 ʱ�����ɼ��ķǵݼ�����
	- ������ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������
	- ������ N=0 ʱ��ȫ�������������Ӧ�Ľ����Ҫ����� 
˼�� 
	- ����һ���ṹ��洢ѧ�š��������ɼ�
	- �Զ���������������ѧ�ŵ������򡢰������ķǵݼ��ֵ������򡢰��ɼ��ķǵݼ�����
	- ����Ҫ��ĸ�ʽ������� 
*/
#include <stdio.h>
struct student {
	char name[10],id[10];
	int score;
}stu[100010]; //��ֹ����Խ�磬�������100000 
int cmp(const void * a, const void * b) {//��ѧ�ŵ�������
	struct student *aa = (struct student*)a;
	struct student *bb = (struct student*)b;
	return strcmp(aa->id,bb->id);
}
int cmp2(const void *a, const void *b) { //�������ķǵݼ��ֵ�������
	struct student *aa = (struct student*)a;
	struct student *bb = (struct student*)b;
	int rel = strcmp(aa->name, bb->name);
	if (!rel) return strcmp(aa->id, bb->id);
	return rel;
}
int cmp3(const void *a, const void *b) { //���ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������
	struct student *aa = (struct student*)a;
	struct student *bb = (struct student*)b;
	int rel = aa->score - bb->score; 
	if (!rel) return strcmp(aa->id, bb->id);
	return rel;
}
int main() {
	int n,i,c,flag=1;
	while(scanf("%d %d",&n,&c)!=EOF){
		if(n==0) return 0;
		for(i=0;i<n;i++){
			scanf("%s %s %d",stu[i].id,stu[i].name,&stu[i].score);
		}
		if(c==1)	qsort(stu,i,sizeof(struct student),cmp);
		if(c==2)	qsort(stu,i,sizeof(struct student),cmp2);
		if(c==3)	qsort(stu,i,sizeof(struct student),cmp3);
		printf("Case %d:\n",flag++);
		for(i=0;i<n;i++){
			printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].score);
		}
	}
	return 0;	
}

