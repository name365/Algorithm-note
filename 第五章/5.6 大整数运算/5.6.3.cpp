/*高精度减法*/
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
bign sub(bign a,bign b){	//高精度 a-b 
	bign c;
	for(int i=0;i<a.len||i<b.len;i++){	//以较长的为界限 
		if(a.d[i]<b.d[i]){	//如果不够减 
			a.d[i+1]--;	//向高位借位
			a.d[i] += 10; 
		}
		c.d[c.len++]=a.d[i]-b.d[i];	//减法结果为当前位结果 
	}
	while(c.len-1>=1 && c.d[c.len-1]==0){
		c.len--	//去除高位的0；同时至少保留一位最低位 
	} 
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
}
int main(){
	char str1[1000],str2[1000];
	scanf("%s %s",str1,str2);
	bign a=change(str1);
	bign b=change(str2);
	print(sub(a,b));
	return 0;
} 
