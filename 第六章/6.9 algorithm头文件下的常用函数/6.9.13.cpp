#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(char a,char b){
	return a>b;
}
int main(){
	int a[]={'T','D','A','K'};
	sort(a,a+4,cmp);	//将a[0]~a[3]从大到小排序 
	for(int i=0;i<4;i++){
		printf("%c",a[i]);
	} 
	return 0;
}

