/*�߾��ȼӷ�*/
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
bign add(bign a,bign b){	//�߾��� a+b 
	bign c;
	int carry=0;	//carry�ǽ�λ 
	for(int i=0;i<a.len||i<b.len;i++){	//�Խϳ���Ϊ���� 
		int temp = a.d[i]+b.d[i]+carry;	//������Ӧλ���λ���
		c.d[c.len++]=temp%10;	//��λ��Ϊ�ý��
		carry=temp/10;	//ʮλ��Ϊ�µĽ�λ 
	}
	if(carry!=0){
		c.d[c.len++]=carry;
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
	print(add(a,b));
	return 0;
} 
