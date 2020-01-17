/*2680
题目描述
	The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest distance between any pair of exits.
	任务真的很简单：给定高速公路上的N个出口，形成一个简单的循环，你应该说出任何一对出口之间的最短距离。
输入
	Each input file contains one test case. For each case, the first line contains an integer N (in [3, 105]), followed by N integer distances D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN is between the N-th and the 1st exits. All the numbers in a line are separated by a space. The second line gives a positive integer M (<=104), with M lines follow, each contains a pair of exit numbers, provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 107.
	每个输入文件都包含一个测试用例。
	对于每种情况，第一行包含整数N(在[3，105]中)，后跟N个整数距离d1d2...Dn，
	其中Di是第i个出口和第(i+1)个出口之间的距离，Dn是第N个和第一个出口之间的距离。
	一行中的所有数字都用空格分隔。
	第二行给出正整数M(<=104)，后面跟着M行，每行都包含一对出口编号，前提是出口编号从1到N。保证往返总距离不超过107。
输出
	For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.
	对于每个测试用例，以M行打印结果，每行包含相应的给定出口对之间的最短距离。	
思考 
	- 题意：给出N个出口之间的距离，然后输入M对出口，计算这M对出口之间的最短距离,
	- 首先，在输入每个边的时候，就计算两个量，
	- 一个是这个环的总距离，用一个num累加就可实现，
	- 另一个，是第一个顶点距离各个顶点的距离，用一维数组实现，
	- 每个顶点的值等于输入的距离加上上一个顶点的值，初始将1这个顶点的值置为0，因为1到1本身就是0。
	- 再根据输入的两个顶点，将它们和顶点1之间的距离相减，就得到了其中一个距离，
	- 另一个距离通过环的总距离减去这个距离就能得到了，
	- 然后比较两个的大小，输出最小的， 
*/ 
#include <stdio.h>
int main(){
	int n,m,i,a[100000],b[100000],num=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		num +=  a[i]; //环的总距离
		b[i+1]=b[i]+a[i]; //第一个顶点距离各个顶点的距离
	} 
	int f1,f2,k1,k2;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&f1,&f2);
		int t1=(f1<f2?f1:f2);
		int t2=(f1>f2?f1:f2);
		k1=b[t2]-b[t1];
		k2=num-k1;
		printf("%d\n",(k1>k2?k2:k1));
	}
	return 0;
} 
