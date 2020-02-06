/*1937
˼��
	- �������鳤�� n 
	- ��������      a[1...n] 
	- ������Ҹ���m 
	- �����������b[1...m] 
	- ��� YES or NO  ��������YES ����NO ��
*/
#include <stdio.h>
int binarySearch(int A[],int left,int right,int x){
	int mid; //midΪleft��right���е�
	while(left <= right){ //���left>right���޷��γɱ����� 
		mid = (left+right)/2; //ȡ�е� 
		if(A[mid] == x)	return 1; //�ҵ�x�������±� 
		else if(A[mid] > x){ //�м��������x 
			right = mid-1; //�������䣨left,mid-1)���� 
		}else{ //�м���С�� x 
			left=mid+1; //����������[mid+1,right]���� 
		}
	}
	return 0; 
} 
int cmp(const void *a,const void *b){	//��С�������� 
	return *(int*)a - *(int*)b;
}
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int a[110],b[110],m;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),cmp);
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		for(i=0;i<m;i++){
			if(binarySearch(a,0,n-1,b[i]))	printf("YES\n");
			else	printf("NO\n");
		}
	}
	return 0;
} 
