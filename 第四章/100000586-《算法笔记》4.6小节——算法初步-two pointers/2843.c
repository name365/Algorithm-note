/*2843
˼��
	- ����n���������ÿ�������ķ����������� 
	- ������������� ÿ��һ������
	- n<=5000 ÿ������<=5000  
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
	int n,i,str[5000];
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
