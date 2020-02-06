/*1936
思考
	- 在一个整数数组上，对于下标为i的整数，如果它大于所有它相邻的整数，
	- 或者小于所有它相邻的整数，则称为该整数为一个极值点，极值点的下标就是i。
	- 题意为输出数组中元素同时大于或小于左右两个元素的小标。
	- 第一个和最后一个只需和右左的数不相同即可。注意没有极值时不输出任何东西，换行符不能输出。 
*/
#include <stdio.h>
int main(){
	int n,i,m;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			int A[90],flag=0,t=0,ans[90];  // flag标记是否存在极值，也标记在某个元素前是否已经有极值输出过了
			scanf("%d",&m);
			if(m==0)	break;
			for(i=0;i<m;i++){
				scanf("%d",&A[i]);
			}
			if(A[0] != A[1]){ //判断首末位 
				flag=1; //为极值 
				ans[t++]=0; //存储极值下标并计数 
			}
			for(i=1;i<m-1;i++){
				if(A[i]>A[i-1] && A[i]>A[i+1] || A[i]<A[i-1] && A[i]<A[i+1]){
					flag=1; //为极值 
					ans[t++]=i; 
				}
			}
			if(A[m-1] != A[m-2])	ans[t++]=m-1;
			if(flag==0)	continue; //无极值点什么都不输出
			for(i=0;i<t;i++){
				printf("%d",ans[i]);
				if(i<t-1)	printf(" ");
				else	printf("\n");
			}
		}		
	} 
	return 0;
} 
