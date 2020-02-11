/*1950
思考
	- 类似于十进制转二进制，采用辗转相除法，此题也是同样的思路，采用辗转相除法，
	- 因为题目并未给x的范围，故x可能为大数，故相除时采用大数除法，保留余数。	
	- 注意输入时如有字母，则字母为大写，输出时如有字母，则字母为小写。
*/
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
bign change(char str[]){	//将整数转换为bign 
	bign a;
	for(int i=strlen(str)-1;i>=0;i--){
		if(str[i]>='0' && str[i] <='9')
			a.d[a.len++]=str[i]-'0';	//逆着赋值 
		else	a.d[a.len++]=(str[i]-'A'+10);
	}
	return a; 
}
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		getchar();	//消去换行
		char x[1001],ans[1001];
		scanf("%s",x);
		bign a=change(x);
		int len=strlen(x),sum=0;
		while(a.len>0){	//a.len==0即辗转相除到了最后
			int carry=0;
			for(int i=a.len-1;i>=0;i--){
				int temp=a.d[i]+carry*m;
				carry=temp%n;
				a.d[i]=temp/n;
			}
			while(a.d[a.len-1]==0)
				a.len--;
			if(carry>=0 &&carry <=9)
				ans[sum++]=carry+'0';
			else	ans[sum++]=carry-10+'a';
		} 
		for(int i=sum-1;i>=0;i--)
			printf("%c",ans[i]);
		printf("\n");
	}	
	return 0;
} 
