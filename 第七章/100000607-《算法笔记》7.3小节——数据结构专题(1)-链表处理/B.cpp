/*���� B: C����-��������
	- ��a��b��������ÿ�������еĽ�����ѧ�š��ɼ���Ҫ�����������ϲ�����ѧ���������С�
	- ��һ�У�a��b��������Ԫ�ص�����N��M,�ÿո������ ������N����a������ Ȼ��M����b������ ÿ��������ѧ�źͳɼ����������
˼��
	- ��Ҫ���Ƕ���һ���ṹ�壬����һ����������Ԫ�ص��Զ��庯����
	- �Զ��庯��Ϊ�߲���Ԫ�أ��߽������� 

*/
#include <stdio.h> 
struct node{	//������ 
	int num,noun;
	node* next;
};
void insert(node* a,node* b){	//����Ԫ�� 
	node* p,*q;
	p=a,q=a->next;
	while(q!=NULL && q->num < b->num){
		p=q;
		q=q->next;
	}
	p->next = b;
	b->next = q;
}
int main(){
	node *q,*p,*a;	//p���浱ǰ��㣬aΪͷ��� 
	int N,M,i;
	scanf("%d %d",&N,&M);
	a=new node;	//����ͷ��� 
	a->next=NULL;	//ͷ��㲻��Ҫ������ָ�����ʼΪNULL 
	for(i=0;i<N+M;i++){
		q=new node;	//�½���� 
		q->next = NULL;	//�½���ָ������ΪNULL 
		scanf("%d %d",&q->num,&q->noun);
		insert(a,q);	//��a����q�� 
	} 
	for(q=a->next;q!=NULL;q=q->next){
		printf("%d %d\n",q->num,q->noun);
	}
	return 0;
}



 
