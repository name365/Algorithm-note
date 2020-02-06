/*������ 
	- �������������� a��b��m����a^b % m 
*/
#include <stdio.h>
typedef long long LL;
LL cmp(LL a,LL b,LL m){ //����д�� 
	LL ans=1;
	while(b>0){
		if(b & 1){
			ans=ans*a%m;
		}
		a=a*a%m;
		b >>= 1;
	} 
	return ans;
}
int main(){
	int a,b,m;
	scanf("%d %d %d",&a,&b,&m);
	int sum=cmp(a,b,m);
	printf("%d\n",sum);
	return 0;
}
