/*1959
思考
	- 设对于小写字母有'a' < 'b' < ... < 'y' < 'z'，而且给定的字符串中的字母已经按照从小到大的顺序排列。
	- next_permutation()给出一个序列在全排列中的下一个序列	
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
		printf("\n");	//注意每组样例输出结束后接一个空行。
	}
    return 0;
}


 
