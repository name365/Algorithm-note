/*1863
思考
	- 输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
	- 先读入十个数，将最小的数放在首位，最大的数放在末尾。
	- 不论是先交换最小还是最大，要考虑再交换之后更新最小或者最大数的下标，以免第二次交换错误。 
*/
#include <stdio.h>
int main(){
	int str[10];
	while(~scanf("%d",&str[0])){
		int max=0,min=0;
		for(int i=1;i<10;i++){
			scanf("%d",&str[i]);
			if(str[max]<str[i])	max=i;
			if(str[min]>str[i])	min=i;
		}
		int temp=str[0];	//换最小值，交换过程中最大值的位置可能改变
		str[0]=str[min];
		str[min]=temp;
		if(max==0)	max=min;
		temp=str[9];
		str[9]=str[max];
		str[max]=temp;
		for(int i=0;i<10;i++)
			printf("%d ",str[i]);
		printf("\n");
	}
	return 0;
} 


 
