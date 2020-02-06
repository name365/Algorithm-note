/*求序列中的第一个大于等于 x 的元素的位置
*/
#include <stdio.h>
//A[]为严格递增序列，left为二分下界，right为二分上界，x 为预查询的数 
//二分区间为左闭右闭的[left,right],传入的初值为[0,n]
int lower_bound(int A[],int left,int right,int x){
	int mid; //mid为left和right的中点
	while(left < right){ //如果left==right就意味着找到唯一位置 
		mid = (left+right)/2; //取中点 
		if(A[mid] >= x){ //中间的数大于等于 x 
			right = mid; //往子区间（left,mid)查找 
		}else{ //中间数小于 x 
			left=mid+1; //往右子区间[mid+1,right]查找 
		}
	}
	return left; //返回夹出来的位置 
} 
int main(){
	const int n=10;
	int A[10] = {1,3,4,6,7,8,10,11,12,15};
	printf("%d %d\n",lower_bound(A,0,n-1,6),lower_bound(A,0,n-1,9));
	return 0;
}  
