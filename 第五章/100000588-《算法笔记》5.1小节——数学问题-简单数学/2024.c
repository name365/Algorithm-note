/*2024
˼��
	- �����һ��Ϊ������m������ÿ����������һ��Ϊ����ʽ��������n��
	- ������n+1��������ʾÿ��ϵ�������һ������x��n������10��
*/
#include <stdio.h>
int main(){
	int m,n,i,str[11];
	double x;
	while(scanf("%d",&m)!=EOF){
		while(m--){
			scanf("%d",&n);
			int sum=0;
			for(i=0;i<=n;i++)
				scanf("%d",&str[i]);
			scanf("%lf",&x);
			for(i=0;i<=n;i++)
				sum += str[i]*pow(x,i); //���� x �� i ���ݣ��� x^i��
			printf("%d\n",sum);
		}
	}
	return 0;
} 

 
