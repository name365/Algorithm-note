#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;	//�� a > b ʱ���� a ���� b ��ǰ�� 
} 
int main(){
	int a[]={9,4,2,5,6,-1};
	sort(a,a+4,cmp);	//��a[0]~a[3]�Ӵ�С���� 
	for(int i=0;i<4;i++){
		printf("%d ",a[i]);
	} 
	return 0;
}

