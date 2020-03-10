/*BFSģ��

void BFS(int s){
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		ȡ������Ԫ��top;
		���ʶ���Ԫ��top;
		������Ԫ�س���;
		��top����һ������δ����ӵĵ�ȫ����ӣ�������Ϊ�����; 
	}
}


*/
#include <stdio.h> 
#include <queue>
using namespace std;
struct node{
	int x,y;	//λ��(x,y) 
}Node;
int n,m;	//�����С 
int matrix[100][100];	//01���� 
bool inq[100][100]={false};	//��¼λ��(x,y)�Ƿ�������� 
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y){
	if(x>=n || x<0 || y>=m || y<0)	return false;	//Խ�緵��false 
	if(matrix[x][y]==0 || inq[x][y]==true)	return false;	//��ǰλ��Ϊ0����(x,y)������ӣ�����false 
	return true;	//�����㷵��true 
} 
void BFS(int x,int y){
	queue<node>	Q;
	Node.x=x,Node.y=y;	//��ǰ����Ϊ(x,y)
	Q.push(Node);	//�����Node���
	inq[x][y]=true;	//����(x,y)������� 
	while(!Q.empty()){
		node top=Q.front();	//ȡ������Ԫ�� 
		Q.pop();	//����Ԫ�س��� 
		for(int i=0;i<4;i++){	//ѭ��4�Σ��õ�4������λ�� 
			int newX=top.x+X[i];
			int newY=top.y+Y[i];
			if(judge(newX,newY)){	//�����λ��(nodeX,nodeY)��Ҫ���� 
				Node.x = newX,Node.y=newY;
				Q.push(Node);	//�����Node������� 
				inq[newX][newY]=true;	//����λ��(nodeX,nodeY)������� 
			}
		}
	} 
}
 
int main(){
	scanf("%d %d",&n,&m);	//����������� 
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){ 
			scanf("%d",&matrix[x][y]);	//������� 
		}
	} 
	int ans=0;	//��ſ���
	for(int x=0;x<n;x++){	//ö��ÿһ��λ�� 
		for(int y=0;y<m;y++){
			if(matrix[x][y]==1 && inq[x][y]==false){	//���Ԫ��Ϊ 1���Ҵ�δ����� 
				ans++;	//������ 1
				BFS(x,y);	//���������� 
			}
		} 
	} 
	printf("%d\n",ans); 
	return 0;
 }
