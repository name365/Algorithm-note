#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str[3]={"bbbb","cc","aaa"};
	sort(str,str+3);	//���ֵ����д�С������� 
	for(int i=0;i<3;i++){
		cout << str[i] << endl;
	} 
	return 0;
}
