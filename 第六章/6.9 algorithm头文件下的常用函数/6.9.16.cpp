#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){	//�Ӵ�С���� 
	return a>b;	//�� a > b ʱ���� a ���� b ��ǰ�� 
} 
int main(){
	vector<int> vi;
	vi.push_back(3);
	vi.push_back(1);
	vi.push_back(2);
	sort(vi.begin(),vi.end(),cmp);
	for(int i=0;i<3;i++){
		printf("%d ",vi[i]);
	}
	return 0;
}
