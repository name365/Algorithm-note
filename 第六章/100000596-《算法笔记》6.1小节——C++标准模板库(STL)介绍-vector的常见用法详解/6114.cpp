/*
思考
	- 这一题利用vector可以很方便的解决问题
	- 我们其实要做的就是把每一个课程代码存到每一个学生的选课名单里。
	- 这样的话，学生就是一个vector，我们不断的把课程代码push进对应学生的vector中。
	- 首先我们利用散列那一章的字符串hash，将名字这个字符串转化成唯一的整数，
	- 利用这个整数，找到hash表对应的位置。
	- 由于是三个字符加一个字母。所以一共有26*26*26*10种名字的组合。
	- 于是就建立这么多的vector。
		const int maxn=26*26*26*10+1;//将名字唯一的对应成数字有maxn种
		vector<int> hashTable[maxn]; //把每个名字映射在容器中，再利用容器存储课程代码?
	- 然后不断的push课程代码到对应的hashTable中
	- 最后来进行相应的输出。 
*/
#include <stdio.h>
#include <algorithm>	//sort函数的头文件 
#include <vector>
using namespace std;
const int maxn=26*26*26*10+1;//将名字唯一的对应成数字有maxn种
vector<int> hashTable[maxn]; //把每个名字映射在容器中，再利用容器存储课程代码
int getid(char str[]){	//将字符串转化成唯一的整型数字 
	int id=0;
	for(int i=0;i<3;i++){
		id=id*26+str[i]-'A';
	}
	id=id*10+str[3]-'0';
	return id;
} 
int main(){
	int N,K;	//查找其课程列表的学生数量，课程总数
	char name[5];
	scanf("%d %d",&N,&K);
	for(int i=0;i<K;i++){
		int course,x;
		scanf("%d %d",&course,&x);	//course课程索引,x注册学生数量
		for(int j=0;j<x;j++){
			scanf("%s",name);
			int id=getid(name);
			hashTable[id].push_back(course);	//将课程代码存入对应学生的hash中
		}
	} 
	for(int i=0;i<N;i++){
		scanf("%s",name);
		int id=getid(name);
		sort(hashTable[id].begin(),hashTable[id].end());//将课程代码顺序输出
		printf("%s %d",name,hashTable[id].size());
		for(int j=0;j<hashTable[id].size();j++){
			printf(" %d",hashTable[id][j]);
		}
		printf("\n");
	}
	return 0;
}


