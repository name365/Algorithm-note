/*1949
思考
	- 避坑呀，题中a和b的位数不超过1000位，但一定要定义超过1000，比如1001，否则会出现50%的错误
*/
/*高精度加法*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[1001];
	int len;
	bign(){	//结构体初始化，用C写的话比较麻烦，所以C++ 
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
bign add(bign a,bign b){	//高精度 a+b 
	bign c;
	int carry=0;	//carry是进位 
	for(int i=0;i<a.len||i<b.len;i++){	//以较长的为界限 
		int temp = a.d[i]+b.d[i]+carry;	//两个对应位与进位相加
		c.d[c.len++]=temp%10;	//个位数为该结果
		carry=temp/10;	//十位数为新的进位 
	}
	if(carry!=0){
		c.d[c.len++]=carry;
	} 
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
	printf("\n");
}
int main(){
	char str1[1001],str2[1001];
	while(scanf("%s %s",str1,str2)!=EOF){
    	bign a=change(str1);
	    bign b=change(str2);
	    print(add(a,b));
	}
	return 0;
}  
