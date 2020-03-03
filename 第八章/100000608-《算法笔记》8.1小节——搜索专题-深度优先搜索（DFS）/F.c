/*问题 F: 【递归入门】走迷宫

思考 
【算法分析】 
　　用一个a数组来存放迷宫可走的情况，另外用一个数组b来存放哪些点走过了。每个点用两个数字来描述，一个表示行号，另一个表示列号。对于某一个点(x，y)，四个可能走的方向的点描述如下表： 
　　　2 
1　　x,y　　3 
　　　4 
　　对应的位置为：(x, y-1)，(x-1, y)，(x, y+1)，(x+1, y)。所以每个点都要试探四个方向，如果没有走过(数组b相应的点的值为0)且可以走(数组a相应点的值为1)同时不越界，就走过去，再看有没有到达终点，到了终点则输出所走的路，否则继续走下去。 
　　这个查找过程用search来描述如下： 
procedure search(x, y, b, p)；{x，y表示某一个点，b是已经过的点的情况，p是已走过的路} 
　begin 
　　　for i:＝1 to 4 do{分别对4个点进行试探} 
　　　begin 
　　　　　先记住当前点的位置，已走过的情况和走过的路； 
　　　　　如果第i个点(xl，y1)可以走，则走过去； 
　　　　　如果已达终点，则输出所走的路径并置有路可走的信息， 
　　　　　否则继续从新的点往下查找search(xl，y1，b1，p1)； 
　　　end； 
　end； 
　　有些情况很明显是无解的，如从起点到终点的矩形中有一行或一列都是为0的，明显道路不通，对于这种情况要很快地“剪掉”多余分枝得出结论，这就是搜索里所说的“剪枝”。从起点开始往下的一层层的结点，看起来如同树枝一样，对于其中的“枯枝”——明显无用的节点可以先行“剪掉”，从而提高搜索速度。  
	- C语言需自定义bool，所以用0代表false，true代表 1,即no=0 \ no=1 
*/
#include <stdio.h>
int a[20][20], endx, endy, m, n,no = 1;
int dx[4] = { 0,-1,0,1 }, dy[4] = { -1,0,1,0 };
struct Route {
	int x, y;
}route[5000];
 
void DFS(int x, int y, int num) {
	int i;
	if (x == endx&&y == endy) {
		for (i = 0; i < num; i++) {
			printf("(%d,%d)->",route[i].x,route[i].y);
		}
		printf("(%d,%d)\n",x,y);
		no = 0;
		return;
	}
	route[num].x = x, route[num].y = y;
	for (i = 0; i < 4; i++) {
		if (a[x + dx[i]][y + dy[i]] == 1 && 1 <= x + dx[i] <= m && 1 <= y + dy[i] <= n) {
			a[x][y] = 0;
			DFS(x + dx[i], y + dy[i], num + 1);
			a[x][y] = 1;
		}
	}
}
int main() {
	int i,j;
	while (scanf("%d %d",&m,&n)!=EOF) {
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++) {
				scanf("%d",&a[i][j]);
			}
		}
		int startx, starty;
		scanf("%d %d %d %d",&startx,&starty,&endx,&endy);
		DFS(startx, starty, 0);
		if (no) printf("-1\n");
	}
	return 0;
}

