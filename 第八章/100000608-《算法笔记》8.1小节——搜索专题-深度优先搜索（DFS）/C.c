/*问题 C: 【递归入门】组合+判断素数
	- 当 n=4，k＝3，4 个整数分别为 3，7，12，19 时，可得全部的组合与它们的和为：
　　- 3＋7＋12=22　　3＋7＋19＝29　　7＋12＋19＝38　　3＋12＋19＝34。
	- 现在，要求你计算出和为素数共有多少种。
	- 例如上例，只有一种的和为素数：3＋7＋19＝29。
	- 第一行两个整数：n , k （1<=n<=20，k＜n） 
	- 第二行n个整数：x1,x2，…,xn （1<=xi<=5000000） 
思考 
	- 从n个数中任选k个数，求和，并判断他们各自的和是否为素数，输出素数个数 
	- 利用DFS递归求和，并判断结果是否为素数，计数
*/
#include <stdio.h>
#include <math.h>
int n,k,str[21],num,i;	//num计数 
int isprime(int sum){	//自定义判断素数函数 
	int i;
	for(i=2;i <= sqrt(sum);i++){	//这里忘了加 = ，错了三次！！！！ 
		if(sum%i==0)	return 0;	//是素数 
	}
	return 1;	//不是素数 
}
void DFS(int index,int count,int sum){	//index抵达数组str的下标,count已选数字个数
	if(count==k){
		if(isprime(sum))	num++;
		return;
	} 
	if(index==n)	return;
	DFS(index+1,count+1,sum+str[index]);	//若选str[index]
	DFS(index+1,count,sum);	//若不选str[index]
} 
int main(){
	scanf("%d %d",&n,&k);
	num=0;
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	DFS(0,0,0);	//初始 n，r为0
	printf("%d\n",num);
	return 0;
} 




 
