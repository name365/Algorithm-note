/*快速幂 
	- 给定三个正整数 a、b、m，求a^b % m 
*/
#include <stdio.h>
typedef long long LL;
LL cmp(LL a,LL b,LL m){ //递归写法 
	if(b==0) return 1;	//如果b为0，那么a^0=1
	if(b%2==1)	return  a*cmp(a,b-1,m)%m;	//b为奇数，转换为b-1
	else{	//b为偶数，转换为b/2 
		LL num=cmp(a,b/2,m);
		return num*num%m;
	} 
}
int main(){
	int a,b,m;
	scanf("%d %d %d",&a,&b,&m);
	int sum=cmp(a,b,m);
	printf("%d\n",sum);
	return 0;
}
