/*�߾��ȳ˷�*/
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
bign multi(bign a,int b){	//�߾��ȳ˷� 
	bign c;
	int carry=0;	//��λ 
	for(int i=0;i<a.len;i++){	//�Խϳ���Ϊ���� 
		int temp = a.d[i] * b+carry;	
		c.d[c.len++]=temp%10;	//��λ��Ϊ�ý��
		carry=temp/10;	//��λ������Ϊ�µĽ�λ 
	}
	while(carry!=0){
		c.d[c.len++]=carry%10;
		carry /= 10;
	}
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
}
int main(){
	char str[1001];
	int num;
	scanf("%s %d",str,&num);
	bign a=change(str);
//	bign b=change(str2);
	print(multi(a,num));
	return 0;
} 
