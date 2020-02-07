#include <stdio.h>
const int maxn=100010;
int A[100010],n;
int randper(int A[],int left,int right){
	int temp=A[left];
	while(left<right){
		while(left<right&&A[right]>temp)	right--;
		A[left]=A[right];
		while(left<right && A[left]<=temp)	left++;
		A[right] = A[left];
	}
	A[left]=temp;
	return left;
}
int cmp(int A[],int left,int right,int x){
	if(left==right)	return A[left];
	int p=randper(A,left,right);
	int M=p-left+1;
	if(x==M)	return A[p];
	if(x<M){
		return cmp(A,left,p-1,x);
	}else{
		return cmp(A,p+1,right,x-M);
	}
} 
int main(){
	srand((unsigned)time(NULL));
	int i,sum=0,sum1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
		sum+=A[i];
	}
	cmp(A,0,n-1,n/2);
	for(i=0;i<n/2;i++){
		sum1+=A[i];
	}
	printf("%d\n",(sum-sum1)-sum1);
	return 0;
}
