#include <stdio.h>
#include <queue>	//���� 
using namespace std;
int main(){
	queue<int> q;
	if(q.empty() == true){	//һ��ʼ������Ԫ�� 
		printf("Empty\n");
	} else{
		printf("Not Empty\n");
	} 
	q.push(1);
	if(q.empty() == true){	//����� ��1���󣬶��зǿ� 
		printf("Empty\n");
	} else{
		printf("Not Empty\n");
	} 
	return 0;
} 
 
