/*1326
˼��
	�����㣺

      typedef struct Link

      {

         struct Link *next;

         int elem;

     }link;   //�����Ҷ�����һ�����
    

   ���庯����

     link *initLink(int *c,int n);//��ʼ������,�����ݽ��и�ֵ

     link *insertElem(link *p,int add,int elem);//����    "  insert "

     link *delElem(link *p,int add);//ɾ��    "  delete  "

     link *display(link *p);//��ʾ    " show "
	
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Link{
    int elem;
    struct Link *next;
}link;
link *initLink(int *c, int n);
link *insertElem(link *p, int add, int elem);
link *delElem(link *p, int add);
link *display(link *p);
link *initLink(int *c, int n){//��ʼ��
    link *p = (link*)malloc(sizeof(link));
    link *temp = p;
    for(int i = n-1; i >= 0; i--) {
        link *a = (link*)malloc(sizeof(link));
        a->elem = c[i];
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}
link *insertElem(link *p, int add, int elem){//����
    link *temp = p;
    int j = 0;
    while(temp && j < add-1) {
        temp = temp->next;
        ++j;
    }
    if(!temp || j > add-1) {
        printf("insert fail\n");
        return p;
    }
    link *c = (link*)malloc(sizeof(link));
    c->elem = elem;
    c->next = temp->next;
    temp->next = c;
    printf("insert OK\n");
    return p;
}
link *delElem(link *p, int add){//ɾ��
    link *temp = p;
    int j = 0;
    while(temp->next && j < add-1) {
        temp = temp->next;
        ++j;
    }
    if(!(temp->next) || j > add-1) {
        printf("delete fail\n");
        return p;
    }
    link *del = temp->next;
    temp->next = del->next;
    free(del);
    printf("delete OK\n");
    return p;
}
link *getElem(link *p, int add){//��ȡ����
    link *temp = p;
    int j = 0;
    while(temp->next && j < add) {
        temp = temp->next;
        ++j;
    }
    if(!(temp->next) || j > add) {
        printf("get fail\n");
        return p;
    }
    printf("%d\n", temp->elem);
    return p;
}
link *display(link *p) {
    link *temp = p;
    if(!(temp->next)) {
        printf("Link list is empty\n");
        return p;
    }
    while(temp->next) {
        temp = temp->next;
        printf("%d ", temp->elem);
    }
    printf("\n");
    return p;
}
int main() {
    int n;
    int c[100];
    scanf("%d", &n);
    char str[20];
    char str1[] = "get";
    char str2[] = "insert";
    char str3[] = "delete";
    char str4[] = "show";
    int add = 0;
    int m_1, m_2;
    for(int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    link *p = initLink(c, n); //��ʼ��
    int order_num; //����_����
    scanf("%d", &order_num);
    for(int j = 0; j < order_num; j++) {
        scanf("%s", &str);
        if(strcmp(str, str1) == 0){//��ȡ "get"
            scanf("%d", &m_1);
            p = getElem(p, m_1);
        }else if(strcmp(str, str2) == 0){//���� "insert"
            scanf("%d %d", &add, &m_2);
            insertElem(p, add, m_2);
        }else if(strcmp(str, str3) == 0){//ɾ�� "delete"
            scanf("%d", &add);
            delElem(p, add);
        }else if(strcmp(str, str4) == 0){//��ʾ "show"
            display(p);
        }
    }
    return 0;
}
 
