#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;	//当 a > b 时，将 a 放在 b 的前面 
} 
int main(){
	int a[]={9,4,2,5,6,-1};
	sort(a,a+4,cmp);	//将a[0]~a[3]从大到小排序 
	for(int i=0;i<4;i++){
		printf("%d ",a[i]);
	} 
	return 0;
}

