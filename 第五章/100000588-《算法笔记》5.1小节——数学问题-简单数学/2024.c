/*2024
思考
	- 输入第一行为样例数m，对于每个样例，第一行为多项式最高项次数n，
	- 接下来n+1个整数表示每项系数，最后一个整数x，n不超过10。
*/
#include <stdio.h>
int main(){
	int m,n,i,str[11];
	double x;
	while(scanf("%d",&m)!=EOF){
		while(m--){
			scanf("%d",&n);
			int sum=0;
			for(i=0;i<=n;i++)
				scanf("%d",&str[i]);
			scanf("%lf",&x);
			for(i=0;i<=n;i++)
				sum += str[i]*pow(x,i); //返回 x 的 i 次幂，即 x^i。
			printf("%d\n",sum);
		}
	}
	return 0;
} 

 
