/*5124
思考
	- 对于40%的数据，2≤b≤1,000；
	- 对于60%的数据，2≤b≤50,000,000；
	- 对于100%的数据，2≤a, b≤2,000,000,000。
	- 求a在mod b意义下的逆元，这里用扩展欧几里得来解决
	- ax≡1(modb)ax≡1(modb) 可以通过移项变为：ax-1≡0(mod b). 
	- 然后再次变为ax-1=bt。即：ax + bt = 1 。 
*/
#include <stdio.h>
int a,b,x,y;
int exgcd(int a,int b){	//x和y使用引用
	if(b==0){
		x=1;y=0;
		return a;
	} 
	int g=exgcd(b,a%b);	//递归计算
	int temp=x;	//存放x的值
	x=y;
	y=temp-a/b*y;
	return g; 
}
int main(){
	while(~scanf("%d %d",&a,&b)){
		exgcd(a,b);
		while(x<0)	x=x+b;
		x=x%b;
		printf("%d\n",x);
	}
	return 0;
}  
