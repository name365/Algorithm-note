#include <stdio.h>
#include <queue>
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int> > q;	//������� > ֮���пո� 
	q.push(3);
	q.push(4);
	q.push(1);	//greater<int>��ʾ����С�����ȼ��� 
	printf("%d\n",q.top());	//���ʶ���Ԫ�� 
	return 0;
}
