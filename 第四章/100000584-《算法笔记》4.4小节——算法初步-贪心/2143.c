/*2143
思考
	- 有n种浓度的万能药水，体积V都相同，浓度则分别为Pi%。
	- 只需选择部分或者全部的万能药水，然后配置出浓度不大于 W%的药水即可解毒。
	- 如何配置此药，能得到最大体积的当前可用的解药呢？
	- 输入数据的第一行是一个整数C，表示测试数据的组数；
	- 每组测试数据包含2行，首先一行给出三个正整数n,V,W(1<=n,V,W<=100)；
	- 接着一行是n个整数，表示n种药水的浓度Pi%(1<=Pi<=100)。	
	- 输出一个整数和一个浮点数；整数表示解药的最大体积，浮点数表示解药的浓度(四舍五入保留2位小数)；
	- 如果不能配出满足要求的的解药，则请输出0 0.00。
	- 先对浓度递增排序，两个浓度的药水配置在一起后，得到的浓度一定是介于配置之前的两种药水之间。
	- 题目要求满足条件的最大值体积，因此只要满足配置后浓度小于等于W%，
	- 那么就可以一直配置下去，直到不能配置为止。
*/ 
#include <stdio.h>
int cmp(const void *a,const void *b){
	return *(int*)a - *(int*)b;
}
int main(){
	int C,i,P[110]={0},n,V,M,sum; // sum表示混合后的浓度(百分制)
	while(scanf("%d",&C)!=EOF){
		while(C--){
			scanf("%d %d %d",&n,&V,&M);
			for(i=0;i<n;i++){
				scanf("%d",&P[i]);
			}
			qsort(P,n,sizeof(int),cmp);
			for(i=0,sum=0;i<n;i++){
				if((double)(sum+P[i])/((i+1)*100) >((double)M/100))
					break;
				sum += P[i];
			}
			printf("%d ",i*V);
			if(sum==0)	printf("0.00\n");
			else	printf("%.2lf\n",((double)sum/(i*100)));
		}
	}
	return 0;
} 


