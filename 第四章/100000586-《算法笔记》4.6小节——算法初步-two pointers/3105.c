/*3105
˼��
	- ʹ�ù鲢������ɡ�
	- ��һ��һ������n���������������
	- ���ÿ���һ������һ������m��������������ֵĸ���
	- ���m��ÿ��һ�����ݣ���С��1��100000֮�䣬������ȣ������10������ݡ�
	- ��������ź�������ݣ�ÿ��һ������ 
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
