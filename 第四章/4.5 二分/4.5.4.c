/*二分查找的模板 
	- 寻找有序序列中第一个满足某条件的元素的位置 
*/
#include <stdio.h>
int solve(int left,int right){
	int mid; //mid为left和right的中点
	while(left < right){ //如果left==right就意味着找到唯一位置 
		mid = (left+right)/2; //取中点 
		if( 条件成立 ){  
			right = mid; //往子区间（left,mid)查找 
		}else{ //中间数小于 x 
			left=mid+1; //往右子区间[mid+1,right]查找 
		}
	}
	return left; //返回夹出来的位置 
} 
int main(){
	
	return 0;
}  
