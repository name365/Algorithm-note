/*6126
思考
	- 相似度定义为NC/NT*100%，其中NC是两个集合共有的不同公共数的个数，NT是两个集合中不同数的总数。
	- 题目说的是先计算两个集合去重后的交集Nc,然后计算两个元素并集并去重Nt,两者相除。
	- 首先输入n，代表有n组集合（本题为3组集合），找两组集合的交集（NC）和并集（NT），
	- 输入K，代表查询K次（1 2 和 1 3表示分别查询集合1、2和集合1、3）
	- 1.建立set数组存放集合
	- 2.查询集合jh1、jh2，NC和t=NT分别表示交集元素个数和并集元素个数。
		- 首先将NT设为集合jh2的元素个数，访问集合x的元素，
		- 如果在集合jh2中能找到（使用find函数，如果返回不等于end），那么交集个数+1，否则并集个数+1。
	
*/
#include <stdio.h> 
#include <set>
using namespace std;
int main(){
	set<int> st[70];	//建立set数组存放集合 
	int N,M,num,K;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d",&M);
		for(int j=0;j<M;j++){
			scanf("%d",&num);
			st[i].insert(num);
		}		
	}
	scanf("%d",&K);
	while(K--){
		int jh1,jh2,NC=0,NT;
		scanf("%d %d",&jh1,&jh2);
		for(set<int>::iterator it=st[jh1].begin();it !=st[jh1].end();it++){
			if(st[jh2].find(*it) != st[jh2].end())	NC++;	//在jh2中找jh1的各个元素是否存在
		}
		NT=st[jh1].size()+st[jh2].size() - NC;
		printf("%.1lf%%\n",(double)NC/NT*100);
	}
	return 0;
} 
