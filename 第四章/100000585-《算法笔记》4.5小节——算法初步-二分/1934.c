/*1934
˼��
	- ����һ����n��Ȼ������n����ֵ������ͬ��
	- ������һ��ֵx��������ֵ����������е��±꣨��0��ʼ�������������������-1����
	- ���ö��ֲ��ң���ѯλ���ж���� 
*/
#include <stdio.h>
int binarySearch(int A[],int left,int right,int x){
	int mid; //midΪleft��right���е�
	while(left <= right){  
		mid = left+(right-left)/2; 
		if(A[mid] == x)	return mid; //�ҵ�x�������±� 
		else if(A[mid] > x){ //�м��������x 
			right = mid-1; //�������䣨left,mid-1)���� 
		}else{ //�м���С�� x 
			left=mid+1; //����������[mid+1,right]���� 
		}
	}
	return -1; //��ѯʧ�ܣ�����-1 
} 
int main(){
	int  n,i,x[210]={0},m;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
		}
		scanf("%d",&m);
		printf("%d\n",binarySearch(x,0,n-1,m));
	}
	return 0;
}
