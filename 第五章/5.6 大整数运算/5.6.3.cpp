/*�߾��ȼ���*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[1000];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[]){	//������ת��Ϊbign 
	bign a;
	a.len = strlen(str);	//bign�ĳ��Ⱦ����ַ����ĳ��� 
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';	//���Ÿ�ֵ 
	}
	return a; 
}
bign sub(bign a,bign b){	//�߾��� a-b 
	bign c;
	for(int i=0;i<a.len||i<b.len;i++){	//�Խϳ���Ϊ���� 
		if(a.d[i]<b.d[i]){	//��������� 
			a.d[i+1]--;	//���λ��λ
			a.d[i] += 10; 
		}
		c.d[c.len++]=a.d[i]-b.d[i];	//�������Ϊ��ǰλ��� 
	}
	while(c.len-1>=1 && c.d[c.len-1]==0){
		c.len--	//ȥ����λ��0��ͬʱ���ٱ���һλ���λ 
	} 
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
}
int main(){
	char str1[1000],str2[1000];
	scanf("%s %s",str1,str2);
	bign a=change(str1);
	bign b=change(str2);
	print(sub(a,b));
	return 0;
} 
