/*PAT A1052 Linked List Sorting
题意
- 给出N个结点的地址address、数据域data以及指针域next,然后给出链表的首地址,要
求把在这个链表上的结点拳data值从小到大输出。

样例解释
- 按照输入,这条链表是这样的〔(结点格式为[address,datanext]):
[00001.0.22222]一[22222,1000,12345]一[12345,-1.33333]一[33333,100000,11111]~[11111,
100,-1]
.按key值排序之后得到:
[12345,-1.00001]一[00001,0,11111]~[11111,100,22222]一[22222,1000,33333]一[33333,
100000,-1]

思路
- 此处可以直接套用前面讲解的一般解题步骤.

- 步骤1:定义静态链表,其中结点性质由bool型变量flag定义,表示为结点在链表中是
否出现。flag为false表示无效结点(不在链表上的结点)。

- 步骤2:初始化,令flag均为false(即0),表示初始状态下所有结点都是无效结点。

- 步骤3:由题目给出的链表首地址begin遍历整条链表,并标记有效结点的flag为tue(即
13,同时计数有效结点的个数count.

- 步骤4:对结点进行排序,排序函数cmp的排序原则是:如果cmp的两个参数结点中有
无效结点的话,则按flag从大到小排序,以把有效结点排到数组左端(因为有效结点的flag
为1,大于无效结点的flag);否则按数据域从小到大排序。

- 步骤5:由于有效结点已经按照数据域从小到大排序,因此按要求输出有效结点即可。

注意点
- 可以直接使用%05d的输出格式,以在不足五位时在高位补0。
- 但是要注意 -1 不能使用 %05d 的输出格式,否则会输出-0001(而不是-1或者-00001),因此必须要留意-1的输出
- 题目可能会有无效结点,即不在题目给出的首地址开始的链表上。
- 数据里面还有均为无效的情况,这时就要根据有效结点的个数特判输出“0-1“。

*/ 
#include <stdio.h>
#include <algorithm> 
using namespace std;
const int maxn = 100005;
struct Node{	//定义静态链表(步骤一) 
	int address,data,next;
	bool flag;	//结点是否在链表上 
}node[maxn]; 
bool cmp(Node a,Node b){
	if(a.flag==false || b.flag == false){
		return a.flag > b.flag;	//只要有a和b一个无效结点，就把它放后面 
	}else{
		return a.data < b.data;	//如果都是有效结点，按照要求排序 
	}
}
int main(){
	for(int i=0;i<maxn;i++){	//初始化(步骤2) 
		node[i].flag = false;
	}
	int n,begin,address;
	scanf("%d %d",&n,&begin);
	for(int i=0;i<n;i++){
		scanf("%d",&address);
		scanf("%d %d",&node[address].data,&node[address].next);
		node[address].address = address;
	}
	int count=0,p=begin;
	while(p != -1){	//枚举链表，计数有效结点个数，步骤3 
		node[p].flag = true;
		count++;
		p = node[p].next;
	}	
	if(count==0){	//特判，新链表中没有结点时输出0 -1 
		printf("0 -1");
	}else{	//筛选有效结点，从小到大排序，步骤4 
		sort(node,node+maxn,cmp);
		printf("%d %05d\n",count,node[0].address);	//输出结果，步骤5 
		for(int i=0;i<count;i++){
			if(i != count-1){
				printf("%05d %d %05d\n",node[i].address,node[i].data,node[i+1].address);
			}else{
				printf("%05d %d -1\n",node[i].address,node[i].data);
			}
		}
	}
	return 0;
} 




















 
