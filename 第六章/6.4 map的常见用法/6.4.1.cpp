#include <stdio.h>
#include <map>
using namespace std;
int main(){
	map<char,int> mp;
	mp['c'] = 20;
	mp['c'] = 30;	//20������
	printf("%d\n",mp['c']);	//��� 
 	return 0;
}

 
