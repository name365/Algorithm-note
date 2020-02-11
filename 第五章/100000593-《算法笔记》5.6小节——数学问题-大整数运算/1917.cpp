#include <stdio.h>
#include <string.h>
struct bign{
	int d[1001];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign multi(bign a,int b){
	bign c;
	int carry=0;
	for(int i=0;i<a.len;i++){
		int temp=a.d[i]*b+carry;
		c.d[c.len++]=temp%10;
		carry=temp/10;
	}
	while(carry!=0){
		c.d[c.len++]=carry%10;
		carry/=10;
	}	
	return c;
}
bign change(int x){
	bign a;
	while(x){
		a.d[a.len++]=x%10;
		x/=10;
	}
	return a;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
	printf("\n");
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)	printf("1\n");
		else{
			bign a=change(n);
			for(int i=1;i<n;i++){
				a=multi(a,i);
			}
			print(a);
		}	
	}
	return 0;
}
