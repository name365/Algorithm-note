/*4826
˼��
	- ����׳�����ĺ���дΪfact(n),��������ֵ������Ϊfloat
	- �Զ���һ�����������ü��� 
*/

#include <stdio.h>
/*����ʽ���μ���*/
long long fact(long long n,long long m){
	long long ans=1;
	for(long long i=1;i<=m;i++){
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
