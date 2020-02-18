/*1801
思考
	- N个数的最大值和最小值。N<=10000，输入的数的绝对值不大于10^6
	- 直接调用函数 max()、min()即可 
	
*/
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int N;
	while(scanf("%d",&N)!=EOF){
		int num,maxs= -1100000,mins=1100000;	//输入的数的绝对值不大于10^6
		for(int i=0;i<N;i++){
			scanf("%d",&num);
			maxs=max(maxs,num);
			mins=min(mins,num);
		}
		printf("%d %d\n",maxs,mins);
	} 
	return 0;
}



 
