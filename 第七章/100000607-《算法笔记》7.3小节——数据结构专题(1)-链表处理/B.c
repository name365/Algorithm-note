/*问题 B: C语言-链表排序
	- 有a、b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列。
	- 第一行，a、b两个链表元素的数量N、M,用空格隔开。 接下来N行是a的数据 然后M行是b的数据 每行数据由学号和成绩两部分组成
思考
	- 自定义一个结构数组，自定义一个排序函数 
	- 先输入n行，在输入m行，并和为一个新的数组
	- 新数组排序输出 
*/
#include<stdio.h>
struct node{	//学号和成绩的结构体 
   int no;
   int score;
}ans[10000];
int cmp(const void *a ,const void *b){ //自定义一个排序函数 
  return *(int *)a - *(int *)b; 
}
int main(){
    int n,m,i;
    while(scanf("%d %d",&n,&m)!=EOF){
        for(i=0;i<n;i++)	//读入n行元素存入结构数组 
            scanf("%d %d",&ans[i].no,&ans[i].score);
        for(i=n;i<n+m;i++)	// 读入m行元素存入结构数组
            scanf("%d %d",&ans[i].no,&ans[i].score);
        qsort(ans,m+n,sizeof(ans[0]),cmp);	//自小到大排序 
        for(i=0;i<m+n;i++)	//输出 
            printf("%d %d\n",ans[i].no,ans[i].score);
    }
    return 0;
}


