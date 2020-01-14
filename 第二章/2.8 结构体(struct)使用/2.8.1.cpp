#include <stdio.h>
struct Point {
	int x,y;
	Point(){ }//用以不经初始化地定义pt[10]
	Point(int _x,int _y):x(_x),y(_y){ }//用以提供x和y的初始化 
}pt[10];
int main(){
	int num=0,i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			pt[num++]=Point(i,j);//直接使用构造函数 
		}
	}
	for(i=0;i<num;i++){
		printf("%d,%d\n",pt[i].x,pt[i].y);
	} 
	return 0;
}
