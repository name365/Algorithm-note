/*1949
˼��
	- �ܿ�ѽ������a��b��λ��������1000λ����һ��Ҫ���峬��1000������1001����������50%�Ĵ���
*/
/*�߾��ȼӷ�*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[1001];
	int len;
};
int i;
struct bign change(char str[]){	//������ת��Ϊbign 
	struct bign a = { { 0 }, 0 };
	a.len = strlen(str);	//bign�ĳ��Ⱦ����ַ����ĳ��� 
	for(i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';	//���Ÿ�ֵ 
	}
	return a; 
}
struct bign add(struct bign a,struct bign b){	//�߾��� a+b 
	struct bign c = { { 0 }, 0 };
	int carry=0;	//carry�ǽ�λ 
	for(i=0;i<a.len||i<b.len;i++){	//�Խϳ���Ϊ���� 
		int temp = a.d[i]+b.d[i]+carry;	//������Ӧλ���λ���
		c.d[c.len++]=temp%10;	//��λ��Ϊ�ý��
		carry=temp/10;	//ʮλ��Ϊ�µĽ�λ 
	}
	if(carry!=0){
		c.d[c.len++]=carry;
	} 
	return c;
}
void print(struct bign a){
	for(i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
	printf("\n");
}
int main(){
	char str1[1001],str2[1001];
	while(scanf("%s %s",str1,str2)!=EOF){
    	struct bign a=change(str1);
	    struct bign b=change(str2);
	    print(add(a,b));
	}
	return 0;
}

