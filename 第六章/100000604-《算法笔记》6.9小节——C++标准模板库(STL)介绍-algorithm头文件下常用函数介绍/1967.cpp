/*1967
思考
	- 逆序输出字符，直接用reverse函数即可 ，将[s,s+len)之间的元素反转	
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


 
