/*
思考
	- 这一题和上一题正好相反，需要输出的是每个课程下的学生信息。
	- 所以我们可以让vector表示课程代码，将学生信息存在每一个课程的vector中。
	- 而学生的名字，我们可以用二维数组来存储，因为每个学生不重名，且只输入一次，
	- 所以每一个整型数字对应一个名字，这样我们存在vector中的就可以是名字对应的整形数字而不是字符串了。
	- 最后要按字母顺序输出的时候，利用sort函数，
	- 而cmp函数就是比较对应的vector中存储的任意两个整数对应的字符串的大小strcmp(stu[a],stu[b]) <0。 
*/
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;
vector<int> hashTable[3000];	//存储课程代码 
char stu[40010][5];	//存储学生名字
bool cmp(int a,int b){
	return strcmp(stu[a],stu[b])<0;
} 
int main(){
	int N,K,C,num;
	char name[5];
	vector<int>::iterator it;	//定义一个int型迭代器访问 
	scanf("%d %d",&N,&K);	//学生总数，课程总数
	for(int i=0;i<N;i++){
		scanf("%s %d",stu[i],&C);	//学生的名字(3个英文大写字母加一个1位数)，一个正数C学生注册的课程数
		for(int j=0;j<C;j++){
			scanf("%d",&num);	//课程编号
			hashTable[num].push_back(i);	//将课程代码存入对应学生的hash中
		}
	} 	
	for(int i=1;i<=K;i++){	//题目说课程代号是顺序的从1开始
		printf("%d %d\n",i,hashTable[i].size());
		sort(hashTable[i].begin(),hashTable[i].end(),cmp);	//将这一个课程代码对应的学生名字排序
		for(it=hashTable[i].begin();it !=hashTable[i].end();it++){	//输出所有的学生名字
			printf("%s\n",stu[*it]);
		}
	}	
	return 0;
} 

