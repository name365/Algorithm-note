#include <stdio.h>	
#include <stdlib.h>
struct node{
	int data;
	node* next;
};
node* create(int Array[]){	//创建链表 
	node *p,*pre,*head;
	head = new node;
	head->next = NULL;
	pre = head;
	for(int i=0;i<5;i++){
		p=new node;
		p->data = Array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}
int search(node* head,int x){	//查找元素 
	int count = 0;	//计数器 
	node* p=head->next;
	while(p!=NULL){
		if(p->data == x){
			count++;
		}
		p = p->next;
	} 
	return count;
} 
void insert(node*head,int pos,int x){	//插入元素 
	node* p = head;
	for(int i=0;i<pos-1;i++){
		p = p->next;
	}
	node* q = new node;
	q->data = x;
	q->next = p->next;
	p->next = q;
}
int main(){
	int Array[5]={5,3,6,1,2};
	node* L = create(Array);
	L = L->next;
	insert(L,3,4);	//调用方法，插入元素4 
	while(L!= NULL){
		
		printf("%d",L->data);
		L = L->next;
	}
	return 0;
}
