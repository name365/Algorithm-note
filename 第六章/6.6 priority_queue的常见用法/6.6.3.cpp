#include <stdio.h>
#include <queue>
using namespace std;
int main(){
	priority_queue<int> q;
	if(q.empty() == true){	//һ��ʼ���ȶ�����û��Ԫ�أ�Ϊ�� 
		printf("Empty\n");
	}else{
		printf("Not Empty\n");
	}
	q.push(1);
	if(q.empty() == true){	//�ڼ��� ��1�������ȶ��зǿ� 
		printf("Empty\n");
	}else{
		printf("Not Empty\n");
	}
	return 0;
}

