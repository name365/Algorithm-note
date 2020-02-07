/*2934
思考
	- 用递归法进行二路归并排序 
	- 输入：第一行一个数据n，表示有n个数要排序。接下来n行每行一个<=10^7的整数。 
	- 输出：n行，由小到大排序后的数据 
	- 数据规模：n<=10^5  
*/
#include <stdio.h>
const int maxn=100;
void merge(int A[],int L1,int R1,int L2,int R2){
	int i=L1,j=L2;
	int temp[maxn],index=0;
	while(i<= R1 && j<=R2){
		if(A[i]<=A[j]){
			temp[index++] = A[i++]; 
		}else{
			temp[index++] = A[j++];
		}
	}
	while(i<=R1)	temp[index++] = A[i++];
	while(j<=R2)	temp[index++] = A[j++];
	for(i=0;i<index;i++){
		A[L1+i] = temp[i];
	}
}
void cmp(int A[],int left,int right){
	if(left<right){
		int mid=(left+right)/2;
		cmp(A,left,mid);
		cmp(A,mid+1,right);
		merge(A,left,mid,mid+1,right);
	}
}
int main(){
	int n,i,str[100010];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
		cmp(str,0,n-1);
		for(i=0;i<n;i++){
			printf("%d\n",str[i]);
		}
	}
	return 0;
}
