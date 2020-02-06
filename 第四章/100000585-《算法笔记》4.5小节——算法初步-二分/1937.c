/*1937
思考
	- 输入数组长度 n 
	- 输入数组      a[1...n] 
	- 输入查找个数m 
	- 输入查找数字b[1...m] 
	- 输出 YES or NO  查找有则YES 否则NO 。
*/
#include <stdio.h>
int binarySearch(int A[],int left,int right,int x){
	int mid; //mid为left和right的中点
	while(left <= right){ //如果left>right就无法形成闭区间 
		mid = (left+right)/2; //取中点 
		if(A[mid] == x)	return 1; //找到x，返回下标 
		else if(A[mid] > x){ //中间的数大于x 
			right = mid-1; //往子区间（left,mid-1)查找 
		}else{ //中间数小于 x 
			left=mid+1; //往右子区间[mid+1,right]查找 
		}
	}
	return 0; 
} 
int cmp(const void *a,const void *b){	//从小到大排序 
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
