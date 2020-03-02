/*问题 C: 最快合并链表(线性表)
	- m,n分别为L1、L2表中数据结点个数。要求设计一算法，用最快速度将两表合并成一个带头结点的循环单链表。
	- 与上一题类似，只不过少了排序。 
*/
#include <stdio.h> 
struct node{	//学号和成绩的结构体 
   int no;
}str[10000];
int main(){
	int m,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)	//读入n行元素存入结构数组 
        scanf("%d",&str[i].no);
    scanf("%d",&m);
    for(i=n;i<n+m;i++)	// 读入m行元素存入结构数组
        scanf("%d",&str[i].no);
    for(i=0;i<m+n;i++)	//输出 
        printf("%d ",str[i].no);
	return 0;
}

