/*�߾��ȳ���*/
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
bign divide(bign a,int b,int& r){	//�߾��ȳ��� ��r Ϊ���� 
	bign c;
	c.len = a.len;	//��������ÿһλ���̵�ÿһλ��һһ��Ӧ�ģ��������� 
	for(int i=a.len-1;i>=0;i--){	//�Ӹ�λ��ʼ 
		r=r*10+a.d[i];	//����һλ�������������
		if(r<b)	a.d[i]=0;	//����������λΪ0
		else{
			c.d[i]=r/b;	//��
			r=r%b;	//����µ����� 
		} 
	} 
	while(c.len-1>=1 && c.d[c.len-1]==0){
		c.len--;	//ȥ����λ��0��ͬʱ�������λ 
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
	int sam=a/num; 
	print(multi(a,num,sam));
	return 0;
} 
