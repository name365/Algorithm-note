/*2506
思路：
	- 因为这个图形是一个*从第一行到最后一行依次减少，又依次增多的图形。
	- 应该意识到*前输出的空格与第几行有关。
	- 所以代码核心是通过i与num-1的大小比较来判断是否到达第n行，若没到第n行，cnt--，到达第n行cnt++。
	- 通过控制cnt来影响输出的空格。 
*/
#include <stdio.h>
int main(){
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
		int c=n; 
		for(i=0;i<n*2-1;i++){ //要输出的行数 
			for(j=c;j<n;j++){ //输出空格 
				printf(" "); 
			}
			for(j=c;j>0;j--){ //输出每行 
				if(j==1) printf("*\n"); //每行最后一个
				else printf("* "); //注意空格 
			} 
			if(i<n-1) c--;
			else c++;
		}
	}
	return 0;
}
