/*��չŷ������㷨 */
#include <stdio.h>
int gcd(int a,int b){
	if(b==0)	return a;
	else return gcd(b,a%b);
}
int exgcd(int a,int b,int &x,int &y){	//x��yʹ������
	if(b==0){
		x=1;y=0;
		return a;
	} 
	int g=exgcd(b,a%b);	//�ݹ����
	int temp=x;	//���x��ֵ
	x=y;
	y=temp-a/b*y;
	return g; 
}
int main(){
	
	return 0; 
} 
