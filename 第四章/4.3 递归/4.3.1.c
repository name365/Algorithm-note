/*ʹ�õݹ����n�Ľ׳�*/ 
#include <stdio.h>
int F(int n){
	if(n==0) return 1; //������ݹ�߽�F(0)ʱ������F(0)=1 
	else return F(n-1)*n; //û�е���ݹ�߽�ֵʱ��ʹ�õݹ�ʽ�����ݹ���ȥ 
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
}
