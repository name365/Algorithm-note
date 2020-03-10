/*
输入
5 5	//行列数 
.....	//迷宫信息 
.*.*.
.*S*.
.***.
...T*
2 2 4 3	//起始点坐标 
 
*/
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
struct node{
	int x,y;	//位置(x,y) 
	int step;	//step为 
}S,T,Node;

int n,m;	//矩阵大小 
char maze[100][100];	//迷宫信息 
bool inq[100][100]={false};	//记录位置(x,y)是否已入过队 
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool test(int x,int y){
	if(x>=n || x<0 || y>=m || y<0)	return false;	//越界返回false 
	if(maze[x][y]=='*')	return false;	//墙壁 * 
	return true;	//有效位置
} 

int BFS(){
	queue<node>	q;
	q.push(S);	//将结点S入队
	while(!q.empty()){
		node top=q.front();	//取出队首元素 
		q.pop();	//队首元素出队 
		if(top.x == T.x && top.y == T.y){
			return top.step;	//终点，直接返回最少步数 
		}
		for(int i=0;i<4;i++){	//循环4次，得到4个相邻位置 
			int newX=top.x+X[i];
			int newY=top.y+Y[i];
			if(test(newX,newY)){	//位置(nodeX,nodeY)有效 
				Node.x = newX,Node.y=newY;
				Node.step = top.step+1;	//Node层数为 top 的层数加 1  
				q.push(Node);	//将结点Node加入队列 
				inq[newX][newY]=true;	//设置位置(nodeX,nodeY)已入过队 
			}
		}
	} 
	return -1;	//无法到达终点T时返回 -1  
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		getchar();	//过滤掉每行后面的换行符
		for(int j=0;j<m;j++){
			maze[i][j] = getchar();
		} 
		maze[i][m+1]='\0';
	}
	scanf("%d %d %d %d",&S.x,&S.y,&T.x,&T.y);	//起点和终点的坐标
	S.step = 0;	//初始化起点层数为0
	printf("%d\n",BFS()); 
	return 0;
} 

