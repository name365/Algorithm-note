#include <stdio.h>
#include <algorithm>	//ֻ�����ȡԤ��ѯ��Ԫ�ص��±꣬�������� 
using namespace std;
int main(){
	int a[10]={1,2,2,3,3,3,5,5,5,5};	//ע�������±��0��ʼ
	//Ѱ�� 3
	printf("%d, %d\n",lower_bound(a,a+10,3)-a,upper_bound(a,a+10,3)-a); 
	return 0;
}


