/*�����ĳ����������*/
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	vector<int> vi;	// *(vi.begin()+i)�ȼ���vi[i] 
	for(int i=1;i<=5;i++){
		vi.push_back(i);
	}//vi.begin()Ϊȡvi����Ԫ�ص�ַ���� it ָ�������ַ 
	vector<int>::iterator it = vi.begin();	
	for(int i=0;i<5;i++){
		printf("%d ",*(it+i));	//��� 
	} 
	return 0;
}
 
