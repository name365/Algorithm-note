/*1951
˼��
	- ������N������С�������������������Ľ����ÿ����ռһ�С�
	- �Զ����������������Ƚϴ�С�����¹��� 
	- ���ȴ��ߴ󡣳���С��С��ͬ���Ƚ���ͬλ��С��	
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct bign{
	int d[1001];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
}cnt[1001];
bign change(char str[]){	//������ת��Ϊbign 
	bign a;
	a.len = strlen(str);	//bign�ĳ��Ⱦ����ַ����ĳ��� 
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';	//���Ÿ�ֵ 
	}
	return a; 
}
bool stp(bign a,bign b) {                    //����
	if(a.len!=b.len)	return a.len<b.len;
	for(int i=a.len-1;i>=0;i--){
		if(a.d[i]!=b.d[i])	return a.d[i]<b.d[i];
	}
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--)
		printf("%d",a.d[i]);
	printf("\n");
}
int main(){
	int N,i;
	char len[1001];
	while(scanf("%d",&N)!=EOF){
		for(i=0;i<N;i++){
			scanf("%s",len);
			cnt[i]=change(len);
		}
		sort(cnt,cnt+N,stp);
		for(i=0;i<N;i++){
			print(cnt[i]);
		}
	}
	return 0;
} 

 

 
