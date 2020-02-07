/*3105
思考
	- 使用归并排序完成。
	- 第一行一个数字n，代表输入的组数
	- 其后每组第一行输入一个数字m，代表待排序数字的个数
	- 其后m行每行一个数据，大小在1～100000之间，互不相等，最多有10万个数据。
	- 升序输出排好序的数据，每行一个数字 
*/
#include <stdio.h>
const int maxn=100005;
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
	int i,n,str[maxn];
	long long m;
	while(scanf("%d",&n)!=EOF,n--){
		scanf("%lld",&m);
		for(i=0;i<m;i++){
			scanf("%d",&str[i]);
		}
		cmp(str,0,m-1);
		for(i=0;i<m;i++){
			printf("%d\n",str[i]);
		}
	}
	return 0;
} 
