/*1906
	- ͨ��ȡ�����ÿ������ĩλ��������ˣ�����͵ó���� 
*/
#include <stdio.h>
int main(){
	long long a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		int num=0,i,j,k;
		for(i=0;a;i++){
			int p=a%10;
//			printf("p=%lld ",p);
			a/=10;
//			printf("a=%lld\n",a);
			for(j=0,k=b;k;j++){
				int q=k%10;
//				printf("q=%lld ",q);
				k /= 10;
//				printf("k=%lld\n",k);
				num += p*q;
			}
		}
		printf("%lld\n",num);
	}
	return 0;
}
