/*5067
˼��
	- ����һ������Ϊn��1��n��1,000,000�����������������У��Լ���һ����m��1��m��1,000,000��
	- ��һ������������m,n��
	- �ڶ���Ϊn���������� 
	- �����k������� 
*/
#include <stdio.h>
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
	int m,i,n,str[1000010];
	while(scanf("%d %d",&n,&m)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
		int ans=cmp(str,0,n-1,n-m+1);
		printf("%d\n",ans);
	}
	return 0;
}
