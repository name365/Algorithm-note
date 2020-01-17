#include <stdio.h>
int main(){
	long long T,A,B,C,i; //区间[-231, 231]内的3个整数A、B和C
	scanf("%lld",&T);
	for(i=1;i<=T;i++){
		scanf("%lld %lld %lld",&A,&B,&C);
		long long k=A+B;
		if(k>C){
			printf("Case #%lld: true\n",i);
		}else{
			printf("Case #%lld: false\n",i);
		}
	}
	return 0;
}
