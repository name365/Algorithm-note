/*2000
思考
	- 读入一个整数N。若N为非负数，则计算N 到2N 之间的整数和；若N为一个负数，则求2N 到N 之间的整数和。
	- 
*/
#include <stdio.h>
int main(){
	int m,n,i,j;
	while(scanf("%d",&m)!=EOF){
		for(i=0;i<m;i++){
			int sum=0;
			scanf("%d",&n);
			if(n>=0){
				for(j=n;j<=2*n;j++){
					sum += j;
				}
				printf("%d\n",sum);
			}else{
				for(j=n*2;j<=n;j++){
					sum += j;
				}
				printf("%d\n",sum);
			}
		}
	}
	return 0;
}
