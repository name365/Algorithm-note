/*1917
˼��
	- ���ʹ�ó��淽�������㵽20�Ľ׳˾ͻᱨ��������һ�������߾��ȳ˷�
	- �������� 
*/
#include <stdio.h>
#include <string.h>
struct bign{
	int d[10001];
	int len;
};
struct bign change(int x){	//������ת��Ϊbign 
	struct bign a = { { 0 }, 0 };
	while(x){
		a.d[a.len++]=x%10;
		x /= 10;
	}
	return a; 
}
struct bign multi(struct bign a,int b){	//�߾��ȳ˷� 
	struct bign c={{0},0};
	int i,carry=0;	//��λ 
	for(i=0;i<a.len;i++){	//�Խϳ���Ϊ���� 
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
void print(struct bign a){
	int i;
	for(i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
	}
	printf("\n");
}
int main(){
	int num,i;
	while(scanf("%d",&num)!=EOF){
    	if(num==0)	printf("1\n");
    	else{
    		struct bign a=change(num);
    		for(i=1;i<num;i++){
    			a=multi(a,i);
			}
			print(a);
		}
	}
	return 0;
}


 
