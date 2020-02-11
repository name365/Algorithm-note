/*高精度除法*/
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
bign divide(bign a,int b,int& r){	//高精度除法 ，r 为余数 
	bign c;
	c.len = a.len;	//被除数的每一位和商的每一位是一一对应的，先令长度相等 
	for(int i=a.len-1;i>=0;i--){	//从高位开始 
		r=r*10+a.d[i];	//和上一位遗留的余数组合
		if(r<b)	a.d[i]=0;	//不够除，该位为0
		else{
			c.d[i]=r/b;	//商
			r=r%b;	//获得新的余数 
		} 
	} 
	while(c.len-1>=1 && c.d[c.len-1]==0){
		c.len--;	//去除高位的0，同时保留最低位 
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
	int sam=a/num; 
	print(multi(a,num,sam));
	return 0;
} 
