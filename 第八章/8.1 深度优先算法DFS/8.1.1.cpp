/*题目 
	- 有n件物品,每件物品的重量为w[i],价值为c[i].现在需要选出若干件物品放入一个容
	- 量为V的背包中,使得在选入背包的物品重量和不超过容量V的前提下,让背包中物品的价
	- 值之和最大,求最大价值。(1<=n<=20)
思考
	- 在这个问题中,需要从n件物品中选择若干件物品放入背包,使它们的价值之和最大。
	- 这样的话,对每件物品都有选或者不选两种选择,而这就是所谓的“岔道口“那么什么是“死
	- 胡同“呢?一一题目要求选择的物品重量总和不能超过V,因此一旦选择的物品重量总和超
	- 过V,就会到达“死胡同“,需要返回最近的“岔道口“
	- 显然,每次都要对物品进行选择,因此DFS函数的参数中必须记录当前处理的物品编号
	- index。而题目中涉及了物品的重量与价值,因此也需要参数来记录在处理当前物品之前,已
	- 选物品的总重量sumW与总价值sumC。于是DFS函数看起来是这个样子:
	
	void DFS(int index;int sumW,int sumc){……} 
	
	- 于是,如果选择不放入index号物品,那么sumW与sumC就将不变,接下来处理index
	- +1号物品,即前往DFS(index+1,sumW,sumC)这条分支,而如果选择放入index号物品,
	- 那么sumW将增加当前物品的重量w[index],sumC将增加当前物品的价值c[index],接着处
	- 理index+1号物品,即前往DFS(index+1,sumW+w[index],sumC+c[index])这条分支。

	- 一旦index增长到了n,则说明已经把n件物品处理完毕(因为物品下标为从0到n~1),
	- 此时记录的sumW和sumC就是所选物品的总重量和总价值。如果sumW不超过V且sumC
	- 大于一个全局的记录最大总价值的变量maxValue,就说明当前的这种选择方案可以得到更大
	- 的价值,于是用sumC更新maxValue。	
*/
#include <stdio.h>
const int maxn=30;
int n,V,maxValue=0;	//物品件数 n,背包容量 v ,最大价值maxValue 
int w[maxn],c[maxn];	//w[i]为每件物品的重量，c[i]为每件物品的价值 
void DFS(int index,int sumW,int sumC){
	if(index == n){	//已经完成对n件物品的选择 
		if(sumW<= V && sumC > maxValue){
			maxValue = sumC;	//不超过背包容量时更新最大价值maxValue 
		}
		return;
	}//岔道口 
	DFS(index+1,sumW,sumC);	//不选第index件物品 
	DFS(index+1,sumW+w[index],sumC+c[index]);	//选第index件物品 
} 
int main(){
	scanf("%d %d",&n,&V);
	for(int i=0;i<n;i++){
		scanf("%d",&w[i]);	//每件物品的重量 
	}
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);	//每件物品的价值 
	}
	DFS(0,0,0);	//初始时为第0件物品、当前总重量、总价值均为0 
	printf("%d\n",maxValue);
	return 0;
}



 
