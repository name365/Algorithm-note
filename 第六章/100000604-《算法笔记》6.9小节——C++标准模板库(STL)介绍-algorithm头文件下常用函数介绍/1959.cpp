/*1959
˼��
	- �����Сд��ĸ��'a' < 'b' < ... < 'y' < 'z'�����Ҹ������ַ����е���ĸ�Ѿ����մ�С�����˳�����С�
	- next_permutation()����һ��������ȫ�����е���һ������	
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    char a[10];
    while(scanf("%s",a)!=EOF){
	    int len=strlen(a);
		do{
			printf("%s\n",a);
		} while(next_permutation(a,a+len));
		printf("\n");	//ע��ÿ����������������һ�����С�
	}
    return 0;
}


 
