/*1951
思考
	- 给出的N个数从小到大进行排序，输出排序后的结果，每个数占一行。
	- 自定义排序函数，大数比较大小按如下规则： 
	- 长度大者大。长度小者小。同长比较相同位大小。	
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct bign{
	int d[1001];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
}cnt[1001];
bign change(char str[]){	//将整数转换为bign 
	bign a;
	a.len = strlen(str);	//bign的长度就是字符串的长度 
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';	//逆着赋值 
	}
	return a; 
}
bool stp(bign a,bign b) {                    //核心
	if(a.len!=b.len)	return a.len<b.len;
	for(int i=a.len-1;i>=0;i--){
		if(a.d[i]!=b.d[i])	return a.d[i]<b.d[i];
	}
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--)
		printf("%d",a.d[i]);
	printf("\n");
}
int main(){
	int N,i;
	char len[1001];
	while(scanf("%d",&N)!=EOF){
		for(i=0;i<N;i++){
			scanf("%s",len);
			cnt[i]=change(len);
		}
		sort(cnt,cnt+N,stp);
		for(i=0;i<N;i++){
			print(cnt[i]);
		}
	}
	return 0;
} 

 

 
