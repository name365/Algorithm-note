/*1967
˼��
	- ��������ַ���ֱ����reverse�������� ����[s,s+len)֮���Ԫ�ط�ת	
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    char s[250];
    while (gets(s) != NULL) {
        int len = strlen(s);
        reverse(s, s + len);
        printf("%s\n", s);
    }
    return 0;
}


 
