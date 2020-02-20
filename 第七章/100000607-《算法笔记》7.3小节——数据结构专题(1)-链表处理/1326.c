/*1326
思考
	定义结点：

      typedef struct Link

      {

         struct Link *next;

         int elem;

     }link;   //这里我定义了一个结点
    

   定义函数：

     link *initLink(int *c,int n);//初始化数据,对数据进行赋值

     link *insertElem(link *p,int add,int elem);//插入    "  insert "

     link *delElem(link *p,int add);//删除    "  delete  "

     link *display(link *p);//显示    " show "
	
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
link *initLink(int *c, int n){//初始化
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
link *insertElem(link *p, int add, int elem){//插入
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
link *delElem(link *p, int add){//删除
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
link *getElem(link *p, int add){//获取读数
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
    link *p = initLink(c, n); //初始化
    int order_num; //命令_数量
    scanf("%d", &order_num);
    for(int j = 0; j < order_num; j++) {
        scanf("%s", &str);
        if(strcmp(str, str1) == 0){//获取 "get"
            scanf("%d", &m_1);
            p = getElem(p, m_1);
        }else if(strcmp(str, str2) == 0){//插入 "insert"
            scanf("%d %d", &add, &m_2);
            insertElem(p, add, m_2);
        }else if(strcmp(str, str3) == 0){//删除 "delete"
            scanf("%d", &add);
            delElem(p, add);
        }else if(strcmp(str, str4) == 0){//显示 "show"
            display(p);
        }
    }
    return 0;
}
 
