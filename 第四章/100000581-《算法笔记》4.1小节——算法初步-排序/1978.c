/*1978
思考
	- 对于一个m行m列的（1<m<10）的方阵，求其每一行，每一列及主对角线元素之和， 
	- 先输入一个m,再将读入一个m行m列的二维数组方阵str[m][m]， 
	- 自定义整型排序函数，从大到小排列的一行整数，
	- 最后按照顺序依次输出，行、列、主对角线求和共计十个数据，
	- 注意格式每个整数后跟一个空格，最后换行。 
*/
#include <stdio.h>
int cmp ( const void *a , const void *b )  //从大到小排序 
{ 
  return *(int *)b - *(int *)a; 
} 
int main(){
	int m,i,j;
	while(scanf("%d",&m)!=EOF){
		int str[11][11]={0},len=2*m+2; //2*m+2是数组应该存储的大小 
		int temp[20]={0},k=0; //每次存储输出数组要清空,要大于20 ，不然无法通过 
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				scanf("%d",&str[i][j]);
				temp[k] += str[i][j]; //计算每行的和
			}
			k++; 
		}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				temp[k] += str[j][i]; //计算每一列的和 
			}
			k++;
		}
		for(i=0;i<m;i++){
			temp[k] += str[i][i]; //计算主对角线 
		}
		k++;
		for(i=m-1;i>=0;i--){
			temp[k] += str[m-i-1][i]; //计算副对角线 
		}
		qsort(temp,len,sizeof(int),cmp); //调用排序函数 
		for(i=0;i<len;i++){
			printf("%d",temp[i]);
			if(i<len-1) printf(" "); //最后一个整数无空格 
		}
		printf("\n");
	}
	return 0;
}
