#include <stdio.h>
#include <queue>	//���� 
using namespace std;
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i);	//��iѹ����У���������� 1 2 3 4 5 
	}
	printf("%d\n",q.size());	//size()����queue��Ԫ�صĸ��� 
	return 0;
} 
