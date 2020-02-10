/*1997
思考
	- 求出2 到60 之间所有“完数”和“盈数”，并以如下形式输出： 
	- E: e1 e2 e3 ......(ei 为完数) G: g1 g2 g3 ......(gi 为盈数)
	-  
*/
#include <stdio.h>
int main(){
	int i,j,w[60],y[60],m=0,n=0;
	for(i=2;i<=60;i++){
		int sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)
				sum +=j;	//质因子求和 
		}
		if(sum==i)	w[m++]=i;	//完数存储并计数 
		else if(sum>i)	y[n++]=i;	//盈数存储并计数 
	} 
	printf("E: ");	//输出完数 
	for(i=0;i<m;i++)
		printf("%d ",w[i]);
	printf("G: ");	//输出盈数 
	for(i=0;i<n;i++){
		printf("%d",y[i]);
		if(i!=n-1)	printf(" ");
		else	printf("\n");
	} 
	return 0;
} 


 
