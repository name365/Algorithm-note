#include <stdio.h>
#include <queue>	//���� 
using namespace std;
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i);	//��iѹ����У���������� 1 2 3 4 5 
	}
	for(int i=1;i<=3;i++){
		q.pop();	//������Ԫ�����Σ������γ��� 1 2 3 
	}
	printf("%d\n",q.front());	//���ʶ�ͷ 
	return 0;
} 
 
