/*������ 
	- �������������� a��b��m����a^b % m 
*/
#include <stdio.h>
typedef long long LL;
LL cmp(LL a,LL b,LL m){ //�ݹ�д�� 
	if(b==0) return 1;	//���bΪ0����ôa^0=1
	if(b%2==1)	return  a*cmp(a,b-1,m)%m;	//bΪ������ת��Ϊb-1
	else{	//bΪż����ת��Ϊb/2 
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
