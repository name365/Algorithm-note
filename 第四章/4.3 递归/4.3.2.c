/*���쳲��������еĵ�n��*/
#include <stdio.h>
int F(int n){
	if(n==0 || n==1) return 1; //�ݹ�߽�
	else return F(n-1)+F(n-2); //�ݹ�ʽ 
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
} 
