/*1801
˼��
	- 
	
*/
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int t, maxNum = -1100000, minNum = 1100000;  //��������ľ���ֵ������10^6
        for (int i = 0; i < N; i++) {
            scanf("%d", &t);
            maxNum = max(maxNum, t);
            minNum = min(minNum, t);
        }
        printf("%d %d\n", maxNum, minNum);
    }
}



 
