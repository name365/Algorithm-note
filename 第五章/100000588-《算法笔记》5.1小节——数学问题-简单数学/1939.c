/*1939
˼��
	- ����ƽ���ĵ�λ���ֵ���������
	- ����25��ƽ����625����λ������25�����25��һ���������� 
	- ����NС��100���������ֻ��Ҫ�������ƽ���ĺ���λ�Ƿ�������Լ������ˡ�
*/
#include <stdio.h>
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		int noun=N*N;
		if(noun%100==N || noun%10==N)
			printf("Yes!\n");
		else	printf("No!\n");
	} 
	return 0;
}
