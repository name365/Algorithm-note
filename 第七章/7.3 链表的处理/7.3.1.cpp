#include <stdio.h>	//创建链表 
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
int main(){
	int Array[5]={5,3,6,1,2};
	node* L = create(Array);
	L = L->next;
	while(L!= NULL){
		printf("%d",L->data);
		L = L->next;
	}
	return 0;
}

 
