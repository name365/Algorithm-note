/*2036
	- 进行遍历判断是否为偶数，分别对奇偶计数 
*/
#include <stdio.h>
int main(){
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
		int k[1001]={0},a=0,b=0; //k[i]存储每组数据的n个数， 
		for(i=0;i<n;i++){
			scanf("%d",&k[i]);
			if(k[i]%2==0) a++; //判断是否为偶数 
			else b++;
		}
		if(a>b) printf("NO\n"); //偶数比奇数多，输出NO 
		else printf("YES\n");
	}
	return 0;
} 
