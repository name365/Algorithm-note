/*2000
˼��
	- ����һ������N����NΪ�Ǹ����������N ��2N ֮��������ͣ���NΪһ������������2N ��N ֮��������͡�
	- 
*/
#include <stdio.h>
int main(){
	int m,n,i,j;
	while(scanf("%d",&m)!=EOF){
		for(i=0;i<m;i++){
			int sum=0;
			scanf("%d",&n);
			if(n>=0){
				for(j=n;j<=2*n;j++){
					sum += j;
				}
				printf("%d\n",sum);
			}else{
				for(j=n*2;j<=n;j++){
					sum += j;
				}
				printf("%d\n",sum);
			}
		}
	}
	return 0;
}
