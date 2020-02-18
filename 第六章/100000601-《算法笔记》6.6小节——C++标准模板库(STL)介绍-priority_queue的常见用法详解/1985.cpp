/*1985
思考
	- 设置优先级，第一行输出的第一个把优先级设置为0，之后的优先级数值一次是前1个优先级数值加1.
	- 优先级依次降低。按照优先级高的排序依次输出。	
*/
#include <stdio.h>
#include <string.h>
#include <queue>
#include <map>
using namespace std;
struct fruit{
	int num;	//编号 
	int task;	//任务 
	friend bool operator < (fruit f1,fruit f2){
		if(f1.task != f2.task)	return f1.task >f2.task;	//按照优先级 
		else	return f1.num >f2.num;	//按照编号 
	}
}f1,f2;
int main(){
	char str[100001];
	int n;
	while(scanf("%d",&n)!=EOF){
		getchar();
		priority_queue<fruit> q;
		map<int ,int> p;	//存放优先级
		for(int i=0;i<n;i++){
			scanf("%s",str);
			int i1=4,n1=0;
			while(str[i1] != '(')	//第一个任务
				n1=n1*10+str[i1++]-'0';
			fruit f;
			f.num=n1;
			if(i==0){	//是否为第一个任务 
				f.task=0;
				q.push(f);	//压入前序任务 
			}else	f.task = p[f.num];
			int i2=6,n2=0;
			if(str[i2]=='N')	continue;
			while(i2<strlen(str)){
				if(str[i2] >= '0' && str[i2] <='9')	//字符转换为整型
					n2=n2*10+str[i2]-'0';
				if(str[i2] == ',' || str[i2] ==')'){
					if(p[n2]==0){	//队列中没有 
						fruit ff;
						ff.num = n2;
						ff.task=f.task+1;
						q.push(ff);	//压入后续任务
						n2=0;
						p[n2]=ff.task;
					}
				}
				i2++;
			} 
		} 
		while(q.size()>=1){
			fruit f=q.top();	//访问队首元素 
			q.pop();	//令队首元素出队 
			printf("Task%d ",f.num); 
		}
	} 	
	return 0;
}

