/*1934
思考
	- 输入一个数n，然后输入n个数值各不相同，
	- 再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。
	- 利用二分查找，查询位置判断输出 
*/
#include <stdio.h>
int binarySearch(int A[],int left,int right,int x){
	int mid; //mid为left和right的中点
	while(left <= right){  
		mid = left+(right-left)/2; 
		if(A[mid] == x)	return mid; //找到x，返回下标 
		else if(A[mid] > x){ //中间的数大于x 
			right = mid-1; //往子区间（left,mid-1)查找 
		}else{ //中间数小于 x 
			left=mid+1; //往右子区间[mid+1,right]查找 
		}
	}
	return -1; //查询失败，返回-1 
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
