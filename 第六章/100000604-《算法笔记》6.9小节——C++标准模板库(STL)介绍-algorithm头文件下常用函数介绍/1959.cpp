/*1959
Ë¼¿¼
	- 
	
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    char s[10];
    while (scanf("%s", s) != EOF) {
        int len = strlen(s);
        do {
            printf("%s\n", s);
        } while (next_permutation(s, s + len));
        printf("\n");
    }
    return 0;
}


 
