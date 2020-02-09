/*2125
思考
	- 输入一个偶数，输出满足给定偶数猜想条件的所有素数对的数目。
	-偶数[4,2^15=32768),
	
*/
#include <stdio.h>
typedef int bool;
#define false 0
#define true  1
int i,j;
int prime[40001],pNum=0;
bool p[40001]={0};
void Find_Prime(){
	for(i=2;i<40001;i++){
		if(p[i]==false){	//如果是素数 
			prime[pNum++] = i;	//记录到数组 
			for(j=i+i;j<=40001;j+=i){
				p[j]=true;
			}
		}
	}
}
int main(){
	int n,i;
	Find_Prime();
	while(scanf("%d",&n),n!=0){
		int ans=0;
		for(i=0;prime[i]<n;i++){
			for(j=i;prime[j]<n;j++){
				if(prime[i]+prime[j]==n)	ans++;
				if(prime[i]+prime[j]>n)	break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
} 

 
