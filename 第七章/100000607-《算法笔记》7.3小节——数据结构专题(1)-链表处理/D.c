/*问题 D: 链表查找(线性表)
	- （1） 用最少时间在表中查找数值为x的元素。
	- （2） 若找到将其与后继元素位置相交换。
	- （3） 若找不到将其插入表中并使表中元素仍递增有序。并输出 no.
思考
	- 输入查询数 x ,输入长度 n ，输入n个数
	- 有这个数，将它与后继元素位置相交换，输出这个数和线性表；没有，输出 no，数据插入线性表，输出表 
	- 不需要排序！！！ 
*/
#include <stdio.h>
int main(){
	int x,n,i,str[10000],p=0,q=0;
	scanf("%d %d",&x,&n);
	for(i=0;i<n;i++){	//存入n个数 
		scanf("%d",&str[i]);
		if(str[i]==x)	p=i;	//有这个元素，记录元素的下标 
		if(str[i]>x && str[i-1]<x)	q=i;	//没有这个元素，存入对应的下标 
	} 
	if(p){	//将这个数存入线性表 
		int t=str[p];
		str[p]=str[p+1];
		str[p+1]=t;
		for(i=0;i<n;i++){
			printf("%d ",str[i]);
		}
	}else{
		printf("no\n");
		for(i=0;i<q;i++){
			printf("%d ",str[i]);
		}
		printf("%d ",x);
		for(i=q;i<n;i++){
			printf("%d ",str[i]);
		}
	}
	return 0;
}






