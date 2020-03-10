/*BFS模板

void BFS(int s){
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		取出队首元素top;
		访问队首元素top;
		将队首元素出队;
		将top的下一层结点中未曾入队的点全部入队，并设置为已入队; 
	}
}


*/
#include <stdio.h> 
#include <queue>
using namespace std;
struct node{
	int x,y;	//位置(x,y) 
}Node;
int n,m;	//矩阵大小 
int matrix[100][100];	//01矩阵 
bool inq[100][100]={false};	//记录位置(x,y)是否已入过队 
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y){
	if(x>=n || x<0 || y>=m || y<0)	return false;	//越界返回false 
	if(matrix[x][y]==0 || inq[x][y]==true)	return false;	//当前位置为0，或(x,y)已入过队，返回false 
	return true;	//不满足返回true 
} 
void BFS(int x,int y){
	queue<node>	Q;
	Node.x=x,Node.y=y;	//当前坐标为(x,y)
	Q.push(Node);	//将结点Node入队
	inq[x][y]=true;	//设置(x,y)已入过队 
	while(!Q.empty()){
		node top=Q.front();	//取出队首元素 
		Q.pop();	//队首元素出队 
		for(int i=0;i<4;i++){	//循环4次，得到4个相邻位置 
			int newX=top.x+X[i];
			int newY=top.y+Y[i];
			if(judge(newX,newY)){	//如果新位置(nodeX,nodeY)需要访问 
				Node.x = newX,Node.y=newY;
				Q.push(Node);	//将结点Node加入队列 
				inq[newX][newY]=true;	//设置位置(nodeX,nodeY)已入过队 
			}
		}
	} 
}
 
int main(){
	scanf("%d %d",&n,&m);	//矩阵的行列数 
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){ 
			scanf("%d",&matrix[x][y]);	//读入矩阵 
		}
	} 
	int ans=0;	//存放块数
	for(int x=0;x<n;x++){	//枚举每一个位置 
		for(int y=0;y<m;y++){
			if(matrix[x][y]==1 && inq[x][y]==false){	//如果元素为 1，且从未入过队 
				ans++;	//块数加 1
				BFS(x,y);	//访问整个块 
			}
		} 
	} 
	printf("%d\n",ans); 
	return 0;
 }
