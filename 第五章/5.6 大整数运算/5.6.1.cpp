/*大整数存储*/
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
int cmp(bign a,bign b){	//比较a和b大小，a大、相等、a小分别返回1、0、-1 
	if(a.len >b.len)	return 1;	//a大 
	else if(a.len <b.len)	return -1;	//a小
	else{
		for(int i=a.len-1;i>=0;i--){	//从高位往低位比较 
			if(a.d[i] >b.d[i])	return 1;	//只要有一位a大，则a大
			else if(a.d[i]<b.d[i])	return -1;	//只要有一位a小，则a小 
		}
		return 0;	//两数相等 
	} 
}
int main(){
	
	return 0;
}

 
