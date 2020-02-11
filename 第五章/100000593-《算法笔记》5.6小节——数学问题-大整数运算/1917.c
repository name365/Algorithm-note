/*1917
思考
	- 如果使用常规方法，计算到20的阶乘就会报错，所以是一个大数高精度乘法
	- 大体如下 
*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[10001];
	int len;
};
struct bign change(int x){	//将整数转换为bign 
	struct bign a = { { 0 }, 0 };
	while(x){
		a.d[a.len++]=x%10;
		x /= 10;
	}
	return a; 
}
struct bign multi(struct bign a,int b){	//高精度乘法 
	struct bign c={{0},0};
	int i,carry=0;	//进位 
	for(i=0;i<a.len;i++){	//以较长的为界限 
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
void print(struct bign a){
	int i;
	for(i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
	printf("\n");
}
int main(){
	int num,i;
	while(scanf("%d",&num)!=EOF){
    	if(num==0)	printf("1\n");
    	else{
    		struct bign a=change(num);
    		for(i=1;i<num;i++){
    			a=multi(a,i);
			}
			print(a);
		}
	}
	return 0;
}


 
