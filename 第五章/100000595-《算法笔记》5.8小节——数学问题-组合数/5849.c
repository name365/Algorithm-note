/*5849
˼��
	- ����������ݶ��ǳɶԣ�M��N�����ֵģ�ÿ������M��N����0��m, n��20����EOF������
	- ��ǰһ��һ�������� 
*/
#include <stdio.h>
long long fact(long long n,long long m){
	long long i,ans=1;
	for(i=1;i<=m;i++){
		ans=ans*(n-m+i)/i;	//ע��һ��Ҫ�ȳ��ٳ� 
	}
	return ans; 
} 
int main(){
	long long m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int ans=fact(m,n);
		printf("%d\n",ans);
	}
	return 0;
} 

 
