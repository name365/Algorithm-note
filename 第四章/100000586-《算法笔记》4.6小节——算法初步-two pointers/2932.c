/*2932
˼��
	- �ö��ֵݹ�ķ���ʵ�ֿ��� 
	- ���룺��һ��һ������n����ʾ��n����Ҫ���򡣽�����n��ÿ��һ��<=10^7�������� 
	- �����n�У���С�������������� 
	- ���ݹ�ģ��n<=10^5 
*/
#include <stdio.h>
int part(int A[],int left,int right){
	int temp=A[left];
	while(left<right){
		while(left<right&&A[right]>temp)	right--;
		A[left] = A[right];
		while(left<right && A[left] <=temp)	left++;
		A[right] = A[left];
	}
	A[left]=temp;
	return left;
}
void quict(int A[],int left,int right){
	if(left<right){
		int pos=part(A,left,right);
		quict(A,left,pos-1);
		quict(A,pos+1,right);
	}
}
int main(){
	int n,i,str[100010];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
		quict(str,0,n-1);
		for(i=0;i<n;i++){
			printf("%d\n",str[i]);
		}
	}
	return 0;
}
