#include <stdio.h>
#include <stack>
using namespace std;
int main(){
	stack<int> st;
	for(int i=1;i<=5;i++){
		st.push(i);	//��iѹ��ջ������1 2 3 4 5 
	}
	printf("%d\n",st.top());	//top()ȡջ��Ԫ�� 
	return 0;
}


