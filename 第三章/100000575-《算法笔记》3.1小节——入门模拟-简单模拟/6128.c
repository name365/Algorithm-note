#include <stdio.h>
int main(){
	long long T,A,B,C,i; //����[-231, 231]�ڵ�3������A��B��C
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
