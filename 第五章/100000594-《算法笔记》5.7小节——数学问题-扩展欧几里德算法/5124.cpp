/*5124
思考
	- 对于40%的数据，2≤b≤1,000；
	- 对于60%的数据，2≤b≤50,000,000；
	- 对于100%的数据，2≤a, b≤2,000,000,000。
	- 求a在mod b意义下的逆元，这里用扩展欧几里得来解决
	- ax≡1(modb)ax≡1(modb) 可以通过移项变为：ax-1≡0(mod b). 
	- 然后再次变为ax-1=bt。即：ax + bt = 1 。 
*/
#include<cstdio>
#include<cstring>
using namespace std;
int exGcd(int a,int b,int &x,int &y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int g=exGcd(b,a%b,x,y);
	int temp=x;
	x=y;
	y=temp-a/b*y;
	return g;
}
int main(){
	int a,b,x,y;
	while(~scanf("%d %d",&a,&b)){
		exGcd(a,b,x,y);
		while(x<0)	x=x+b;
		x=x%b;
		printf("%d\n",x);
	}
	return 0;
}
