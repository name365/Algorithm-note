/*2136
## 题目描述
- The least common multiple (LCM) of a set of positive integers is the smallest positive integer which is divisible by all the numbers in the set.
- For example, the LCM of 5, 7 and 15 is 105.
- 正整数集合的最小公倍数(LCM)是可被集合中的所有数字整除的最小正整数。例如，5、7和15的LCM是105。

## 输入
- Input will consist of multiple problem instances. 
- The first line of the input will contain a single integer indicating the number of problem instances. 
- Each instance will consist of a single line of the form m n1 n2 n3 ... nm where m is the number of integers in the set and n1 ... nm are the integers.
- All integers will be positive and lie within the range of a 32-bit integer.
- 输入将由多个问题实例组成。输入的第一行将包含单个整数，表示问题实例的数量。
- 每个实例将由单行组成，格式为m n1 n2 n3.。Nm，其中m是集合中的整数数，n1.。NM为整数。所有整数都将为正，并且位于32位整数的范围内。

## 输出
- For each problem instance, output a single line containing the corresponding LCM. All results will lie in the range of a 32-bit integer.
- 对于每个问题实例，输出包含相应LCM的一行。所有结果都将位于32位整数范围内。

思考
	- 求多个数据的最小公倍数，只需加个循环即可
	- 注意第一次时 gcd=1  这种写法防止溢出 
*/
#include <stdio.h>
int gcd(int a,int b){	//递归写法 ，求最大公约数 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
int main(){
	int n,str,i,m;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			scanf("%d",&m);
			int d=1;
			for(i=0;i<m;i++){
				scanf("%d",&str);
				d=d/gcd(d,str)*str;	//求得最小公倍数 ，第一次时 gcd=1  这种写法防止溢出
			}
			printf("%d\n",d);  
		}
	}
	return 0;
}  

 
