#include <stdio.h>
#include <stack>
using namespace std;
int main(){
	stack<int> st;
	if(st.empty() == true){	//һ��ʼջ��û��Ԫ�أ�Ϊ�� 
		printf("Empty\n");
	}else{
		printf("Not Empty\n");
	}
	st.push(1);
	if(st.empty() == true){	//�ڼ��� ��1����ջ�ǿ� 
		printf("Empty\n");
	}else{
		printf("Not Empty\n");
	}
	return 0;
}
