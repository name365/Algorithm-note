/*1922
思考
	- P1P2...Pi.Q1Q2...Qj对于整数部分，P1P2...Pi是一个非负整数
	- 对于小数部分，Qj不等于0，输入0.0 + 0.0 = 0.0
	- 字符数组增加或者减少后要加'\0'作为结束标志。
*/
#include<stdio.h>
#include<string.h>
struct bign {
	int d[1001], x[1001];		//分别储存整数部分和小数部分
	int dlen, xlen;					//整数部分长度和小数部分
	bign() {
		memset(d, 0, sizeof(d));
		memset(x, 0, sizeof(x));
		dlen = 0, xlen = 0;
	}
};
bign charge(char str[]) {
	bign a;
	int i, j, t, len = strlen(str);
	for(i = 0; str[i] != '.'; i++);
	for(t = 0; t < i; t++)	 //整数从低位开始存
		a.d[t] = str[i - 1 - t] - '0';
	a.dlen = t;
	i++;
	for(j = 0; i < len; i++)	//小数从高位开始存（方便按位相加）
		a.x[j++] = str[i] - '0';
	a.xlen = j;
	return a;
}
bign add(bign a, bign b) {
	bign c;
	int carry1 = 0;
	int maxlen = (a.xlen >= b.xlen) ? a.xlen : b.xlen;
	c.xlen = maxlen;
	for(int i = maxlen - 1; i >= 0; i--) {	//小数相加
		int temp = a.x[i] + b.x[i] + carry1;
		c.x[i] = temp % 10;
		carry1 = temp / 10; 
	}
	while(c.x[c.xlen - 1] == 0)
		c.xlen--;
	int carry2 = carry1;	//小数的进位传给整数
	for(int i = 0; i < a.dlen || i < b.dlen; i++) {	//整数相加
		int temp = a.d[i] + b.d[i] + carry2;
		c.d[c.dlen++] = temp % 10;
		carry2 = temp / 10; 
	}
	if(carry2 != 0) {
		c.d[c.dlen++] = carry2;
	}
	return c;
}
void print(bign a) {
	for(int i = a.dlen - 1; i >= 0; i--)	//整数打印
		printf("%d", a.d[i]);
	if(a.xlen >= 1){
		printf(".");
		for(int i = 0; i < a.xlen; i++)		//小数打印
			printf("%d", a.x[i]);
	}
	printf("\n");
}
int main() {
	int n;
	char str1[1001], str2[1001];
	scanf("%d",&n);
	while(n > 0) {
		scanf("%s%s", str1, str2);
		bign a = charge(str1);
		bign b = charge(str2);
		print(add(a, b));
		n--;
	}
	return 0;
}
