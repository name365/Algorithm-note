#include <stdio.h>
struct Point {
	int x,y;
	Point(){ }//���Բ�����ʼ���ض���pt[10]
	Point(int _x,int _y):x(_x),y(_y){ }//�����ṩx��y�ĳ�ʼ�� 
}pt[10];
int main(){
	int num=0,i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			pt[num++]=Point(i,j);//ֱ��ʹ�ù��캯�� 
		}
	}
	for(i=0;i<num;i++){
		printf("%d,%d\n",pt[i].x,pt[i].y);
	} 
	return 0;
}
