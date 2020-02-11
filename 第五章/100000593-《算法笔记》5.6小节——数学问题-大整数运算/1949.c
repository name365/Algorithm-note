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
};
int i;
struct bign change(char str[]){	//将整数转换为bign 
	struct bign a = { { 0 }, 0 };
	a.len = strlen(str);	//bign的长度就是字符串的长度 
	for(i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';	//逆着赋值 
	}
	return a; 
}
struct bign add(struct bign a,struct bign b){	//高精度 a+b 
	struct bign c = { { 0 }, 0 };
	int carry=0;	//carry是进位 
	for(i=0;i<a.len||i<b.len;i++){	//以较长的为界限 
		int temp = a.d[i]+b.d[i]+carry;	//两个对应位与进位相加
		c.d[c.len++]=temp%10;	//个位数为该结果
		carry=temp/10;	//十位数为新的进位 
	}
	if(carry!=0){
		c.d[c.len++]=carry;
	} 
	return c;
}
void print(struct bign a){
	for(i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
	printf("\n");
}
int main(){
	char str1[1001],str2[1001];
	while(scanf("%s %s",str1,str2)!=EOF){
    	struct bign a=change(str1);
	    struct bign b=change(str2);
	    print(add(a,b));
	}
	return 0;
}

