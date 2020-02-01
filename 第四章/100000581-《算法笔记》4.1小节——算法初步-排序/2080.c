/*2080
思考
	- 输入10个整数，彼此以空格分隔。重新排序以后输出(也按空格分隔)，
	- 先输出其中的奇数,并按从大到小排列， 
	- 然后输出其中的偶数,并按从小到大排列。
	-输入数据随机，有可能相等。多组数据，注意输出格式。 
*/
#include <stdio.h>
int cmp ( const void *a , const void *b ) //从小到大排序 
{ 
  return *(int *)a - *(int *)b; 
} 
int main(){
	int Odd[10]={0},Even[10]={0},i,m=0,n=0,num;
	while(scanf("%d",&num)!=EOF){
		if(num%2)	Odd[m++]=num; //存储奇数 
		else	Even[n++]=num; //存储偶数 
		if(m+n==10){
			qsort(Odd,m,sizeof(int),cmp); //奇数从小到大排序 
			qsort(Even,n,sizeof(int),cmp); //偶数从小到大排序 
			for(i=m-1;i>=0;i--){ //输出奇数，因为要从大到小，所以逆序输出 
				printf("%d ",Odd[i]);
			} 
			for(i=0;i<n;i++){ //输出偶数 
				printf("%d ",Even[i]);
			}
			printf("\n");
			m=n=0; //最后将所有变量归0 
		}
	} 
	return 0;
} 
