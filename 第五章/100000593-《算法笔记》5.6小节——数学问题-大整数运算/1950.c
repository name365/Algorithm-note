/*1950
˼��
	- ������ʮ����ת�����ƣ�����շת�����������Ҳ��ͬ����˼·������շת�������
	- ��Ϊ��Ŀ��δ��x�ķ�Χ����x����Ϊ�����������ʱ���ô�������������������	
	- ע������ʱ������ĸ������ĸΪ��д�����ʱ������ĸ������ĸΪСд��
*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[1001];
	int len;
}; 
struct bign change(char str[]){	//������ת��Ϊbign 
	struct bign a= { { 0 }, 0 };
	int i;
	for(i=strlen(str)-1;i>=0;i--){
		if(str[i]>='0' && str[i] <='9')
			a.d[a.len++]=str[i]-'0';	//���Ÿ�ֵ 
		else	a.d[a.len++]=(str[i]-'A'+10);
	}
	return a; 
}
int main(){
	int m,n,i;
	while(scanf("%d %d",&m,&n)!=EOF){
		getchar();	//��ȥ����
		char x[1001],ans[1001];
		scanf("%s",x);
		struct bign a=change(x);
		int len=strlen(x),sum=0;
		while(a.len>0){	//a.len==0��շת����������
			int carry=0;
			for(i=a.len-1;i>=0;i--){
				int temp=a.d[i]+carry*m;
				carry=temp%n;
				a.d[i]=temp/n;
			}
			while(a.d[a.len-1]==0)
				a.len--;
			if(carry>=0 &&carry <=9)
				ans[sum++]=carry+'0';
			else	ans[sum++]=carry-10+'a';
		} 
		for(i=sum-1;i>=0;i--)
			printf("%c",ans[i]);
		printf("\n");
	}	
	return 0;
} 
