/*5038
思考
	- 不超过一百块的东西，纸币面额分为50 20 10 5 1 五种。
	- 请在知道要找多少钱n给小明的情况下，输出纸币数量最少的方案。 1<=n<=99; 
	- 对于每种数量不为0的纸币，输出他们的面值*数量，再加起来输出 
*/
#include <stdio.h>
int main(){
	int n,i;
	int str[]={50,20,10,5,1}; //存储面值
	while(scanf("%d",&n)!=EOF){
		int b[5]={0}; //数量 
		int flag=1; //判断加号输出
		for(i=0;i<5&&n>0;i++){
			if(n>=str[i]){
				b[i]=n/str[i];
				if(b[i]){
					if(flag){
						printf("%d*%d",str[i],b[i]);
						flag=0; 
					}else{
						printf("+%d*%d",str[i],b[i]);
					}
				}
				n=n%str[i];
			}
		} 
		printf("\n");
	} 
	return 0;
}



