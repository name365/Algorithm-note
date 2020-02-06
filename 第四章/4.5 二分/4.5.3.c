/*�������е�һ������ x ��Ԫ�ص�λ��
*/
#include <stdio.h>
//A[]Ϊ�ϸ�������У�leftΪ�����½磬rightΪ�����Ͻ磬x ΪԤ��ѯ���� 
//��������Ϊ����ұյ�[left,right],����ĳ�ֵΪ[0,n]
int upper_bound(int A[],int left,int right,int x){
	int mid; //midΪleft��right���е�
	while(left < right){ //���left==right����ζ���ҵ�Ψһλ�� 
		mid = (left+right)/2; //ȡ�е� 
		if(A[mid] > x){ //�м��������x 
			right = mid; //�������䣨left,mid)���� 
		}else{ //�м���С�� x 
			left=mid+1; //����������[mid+1,right]���� 
		}
	}
	return left; //���ؼг�����λ�� 
} 
int main(){
	const int n=10;
	int A[10] = {1,3,4,6,7,8,10,11,12,15};
	printf("%d %d\n",upper_bound(A,0,n-1,6),upper_bound(A,0,n-1,9));
	return 0;
}   
