/*����C(m,n)%P 
*/
#include <stdio.h>
/*���ƹ�ʽ���㡪��1*/
int res[1010][1010]={0};	//�ݹ� 
int C(int n,int m,int p){
	if(m==0 || m==n)	return 1;
	if(res[n][m] != 0)	return res[n][m];
	return res[n][m] = (C(n-1,m)+C(n-1,m-1))%p;	//��ֵ������ 
} 
/*���ƹ�ʽ���㡪��2*/
const int n=60;	//���� 
void calC(){
	int i,j;
	for(i=0;i<=n;i++){
		res[i][0]=res[i][i]=1;	//��ʼ���߽� 
	}
	for(i=2;i<=n;i++){
		for(j=0;j<=i/2;j++){
			res[i][j]=(res[i-1][j]+res[i-1][j-1]) % p;
			res[i][i-j]=res[i][j];	
		}
	} 
} 
/*���ݶ���ʽ����*/
int prime[maxn];
int C(int n,int m,int p){
	int i,ans=1;
	for(i=0;prime[i]<=n;i++){
		int c=cal(n,prime[i])-cal(m,prime[i])-cal(n-m,prime[i]);
		ans=ans*binaryPow(prime[i],c,p)%p;
	}
	return ans;
} 
/*ͨ������ʽ�ı���������*/
int C(int n,int m,int p){
	int i,ans=1;
	for(i=1;i<=m;i++){
		ans=ans*(n-m+i)%p;
		ans=ans*inverse(i,p)%p;
	}
	return ans;
} 
/*Lucas����*/
int Lucas(int n,int m){
	if(m==0)	return 1;
	return C(n%p,m%p)*Lucas(n/p,m/p)%p;
}

int main(){
	
	return 0;
}

 
