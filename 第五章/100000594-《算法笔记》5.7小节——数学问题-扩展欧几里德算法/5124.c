/*5124
˼��
	- ����40%�����ݣ�2��b��1,000��
	- ����60%�����ݣ�2��b��50,000,000��
	- ����100%�����ݣ�2��a, b��2,000,000,000��
	- ��a��mod b�����µ���Ԫ����������չŷ����������
	- ax��1(modb)ax��1(modb) ����ͨ�������Ϊ��ax-1��0(mod b). 
	- Ȼ���ٴα�Ϊax-1=bt������ax + bt = 1 �� 
*/
#include <stdio.h>
int a,b,x,y;
int exgcd(int a,int b){	//x��yʹ������
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
	while(~scanf("%d %d",&a,&b)){
		exgcd(a,b);
		while(x<0)	x=x+b;
		x=x%b;
		printf("%d\n",x);
	}
	return 0;
}  
