/*2039
˼��
	-  y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),����y0=x.�������x����n�ε�������������ֵ��
	- double����,����С���������λ��
	- ������ͨ�ļ��� 
*/
#include <stdio.h>
int main(){
	int x,n,i;
	while(scanf("%d %d",&x,&n)!=EOF){
		double sum=x;
		for(i=0;i<n;i++){
			sum=sum*2/3+x/(3*sum*sum);
		}
		printf("%.6lf\n",sum);
	}
	return 0;
} 
