#include <stdio.h>
#include <stack>
using namespace std;
int main(){
	stack<int> st;
	for(int i=1;i<=5;i++){
		st.push(i);	//��iѹ��ջ������1 2 3 4 5 
	}
	for(int i=1;i<=3;i++){
		st.pop();	//5 4 3 ���γ�ջ 
	} 
	printf("%d\n",st.top());	//top()ȡջ��Ԫ�� 
	return 0;
}
