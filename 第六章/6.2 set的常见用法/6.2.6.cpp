#include <stdio.h>
#include <set>
using namespace std;
int main(){
	set<int> st;
	st.insert(2);
	st.insert(5);
	st.insert(4);
	printf("%d\n",st.size());	//���ste�е�Ԫ�ظ��� 
	return 0;
}
