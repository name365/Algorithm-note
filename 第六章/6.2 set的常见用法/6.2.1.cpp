#include <stdio.h>
#include <set>
using namespace std;
int main(){	//set�е�Ԫ���Զ������������Զ�ȥ�ظ�Ԫ�� 
	set<int> st;
	st.insert(3);	//��insert(x)����set��
	st.insert(5);
	st.insert(2);
	st.insert(3);
	for(set<int>::iterator it = st.begin();it != st.end();it++){
		printf("%d",*it);
	} 
	return 0;
}

 
