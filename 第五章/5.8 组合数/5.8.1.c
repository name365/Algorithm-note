/*����n!���ж��ٸ�������*/
#include <stdio.h>
/* O(nlogn)���㷨*/
int cal(int n,int p){
	int i,ans=0;
	for(i=2;i<=n;i++){	//����2~n 
		int temp=i;
		while(temp%p==0){	//ֻҪtemp����p�ı��� 
			ans++;	//p�ĸ����� 1  
			temp/=p;	//temp����p 
		}
	}
	temp ans;
} 
/*O(logn)���㷨*/
int cal(int n,int p){
	int ans=0;
	while(n){
		ans += n/p;
		n /= p;	//�൱�ڷ�ĸ���һ��p 
	}
	return ans;
} 
/*�ݹ�汾*/
int cal(int n,int p){
	if(n<p)	return 0;
	return n/p+cal(n/p,p);
} 

int main(){
	
	return 0;
}

