/*���ֲ��ҵ�ģ�� 
	- Ѱ�����������е�һ������ĳ������Ԫ�ص�λ�� 
*/
#include <stdio.h>
int solve(int left,int right){
	int mid; //midΪleft��right���е�
	while(left < right){ //���left==right����ζ���ҵ�Ψһλ�� 
		mid = (left+right)/2; //ȡ�е� 
		if( �������� ){  
			right = mid; //�������䣨left,mid)���� 
		}else{ //�м���С�� x 
			left=mid+1; //����������[mid+1,right]���� 
		}
	}
	return left; //���ؼг�����λ�� 
} 
int main(){
	
	return 0;
}  
