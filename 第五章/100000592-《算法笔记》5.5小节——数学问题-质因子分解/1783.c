/*1783
思考
	- 求1-n内的完数，所谓的完数是这样的数，它的所有因子相加等于它自身，
	- 比如6有3个因子1,2,3,1+2+3=6，那么6是完数。
	- 如有案例输出有多个数字，用空格隔开，输出最后不要有多余的空格。
	- 自定义一个方法选择哪些是完数，	
*/
#include <stdio.h>
#include <math.h>
int p[10010],cnt=0,i,j;	//p[10010]存储完数的因子 
void cmp(){	//筛选哪些是完数 
	for(i=2;i<10010;i++){
		int sum=0;	//因子相加的和 
		for(j=1;j<=sqrt(i);j++){	//sqrt()函数，求平方根 
			if(i%j==0)	sum += j+i/j;
		}
		if(sum==2*i)	p[cnt++]=i;	//这里的2倍，因为加的时候多加了个 i  
	} 
}
int main(){
	int n;
	cmp();	//调用方法
	while(scanf("%d",&n)!=EOF){
		int count=0;	//计数 
		for(i=0;i<=n && p[i]<=n;i++){
			count++;
		}
		for(i=0;i<count;i++){	//按格式输出 
			if(i)	printf(" ");
			printf("%d",p[i]);
		} 
		printf("\n");
	} 
	return 0;
} 
