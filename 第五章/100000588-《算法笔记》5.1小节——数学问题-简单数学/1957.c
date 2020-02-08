/*1957
思考
	- 看到这道题就想到了，三层遍历，但要注意小数 
	- 用小于等于n元去买100只鸡，大鸡5元/只，小鸡3元/只,还有1/3元每只的一种小鸡，
	- 分别记为x只,y只,z只。编程求解x,y,z所有可能解。按照x，y，z依次增大的顺序输出。
	- 用解方程的方式解这道题需要进行多次猜解，所以用穷举法 
*/
#include <stdio.h>
int main(){
	double n,i,j,k;	//钱数存在小数，要用double
	while(scanf("%lf",&n)!=EOF){
		for(i=0;i<=n/5;i++){
			for(j=0;j<=n/3;j++){
				for(k=0;k<=n*3;k++){
					if(5*i+3*j+k/3<=n && i+j+k==100){
						printf("x=%d y=%d z=%d\n",(int)i,(int)j,(int)k);
					}
				}
			}
		}
	}
	return 0;
} 

 
