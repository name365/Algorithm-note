/*高精度乘法*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[1000];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[]){	//将整数转换为bign 
	bign a;
	a.len = strlen(str);	//bign的长度就是字符串的长度 
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';	//逆着赋值 
	}
	return a; 
}
bign multi(bign a,int b){	//高精度乘法 
	bign c;
	int carry=0;	//进位 
	for(int i=0;i<a.len;i++){	//以较长的为界限 
		int temp = a.d[i] * b+carry;	
		c.d[c.len++]=temp%10;	//个位数为该结果
		carry=temp/10;	//高位部分作为新的进位 
	}
	while(carry!=0){
		c.d[c.len++]=carry%10;
		carry /= 10;
	}
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
}
int main(){
	char str[1001];
	int num;
	scanf("%s %d",str,&num);
	bign a=change(str);
//	bign b=change(str2);
	print(multi(a,num));
	return 0;
} 
