/*1817
*/
#include <stdio.h>
int main(){
	char A[20],B[20];
	while(scanf("%s %s",A,B)!=EOF){
		long long a=0,b=0,i;
		for(i=0;i<strlen(A);i++){ //ͨ���ַ����ȼ���A���ִ�С 
			if(A[i]>='0'&&A[i]<='9'){
				a=a*10+A[i]-'0';
			}
		}
		if(A[0]=='-') a=-a; //�ж�A������ 
		for(i=0;i<strlen(B);i++){ ////ͨ���ַ����ȼ���B���ִ�С  
			if(B[i]>='0'&&B[i]<='9'){
				b=b*10+B[i]-'0';
			} 
		}
		if(B[0]=='-') b=-b; //�ж�B������ 
		printf("%lld\n",a+b);
	} 
	return 0;
}
