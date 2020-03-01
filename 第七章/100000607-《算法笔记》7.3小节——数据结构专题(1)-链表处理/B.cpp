/*问题 B: C语言-链表排序
	- 有a、b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列。
	- 第一行，a、b两个链表元素的数量N、M,用空格隔开。 接下来N行是a的数据 然后M行是b的数据 每行数据由学号和成绩两部分组成
思考
	- 主要就是定义一个结构体，定义一个插入链表元素的自定义函数，
	- 自定义函数为边插入元素，边进行排序。 

*/
#include <stdio.h> 
struct node{	//链表结点 
	int num,noun;
	node* next;
};
void insert(node* a,node* b){	//插入元素 
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
	node *q,*p,*a;	//p保存当前结点，a为头结点 
	int N,M,i;
	scanf("%d %d",&N,&M);
	a=new node;	//创建头结点 
	a->next=NULL;	//头结点不需要数据域，指针域初始为NULL 
	for(i=0;i<N+M;i++){
		q=new node;	//新建结点 
		q->next = NULL;	//新结点的指针域设为NULL 
		scanf("%d %d",&q->num,&q->noun);
		insert(a,q);	//将a插入q中 
	} 
	for(q=a->next;q!=NULL;q=q->next){
		printf("%d %d\n",q->num,q->noun);
	}
	return 0;
}



 
