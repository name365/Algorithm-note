/*�����ı�ʾ�ͻ���
*/
#include <stdio.h>
int gcd(int a,int b){	//�����Լ�����ݹ�д�� 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
typedef struct{	//���� 
	int up,down;	//���ӡ���ĸ 
}Fraction;
Fraction cmp(Fraction result){
	if(result.down<0){	//����Ϊ����������ӷ�ĸ������෴�� 
		result.up = -result.up;
		result.down = -result.down; 
	}
	if(result.up == 0){	//�������Ϊ0 
		result.down=1;	//���ĸΪ1 
	}
	else{
		int d=gcd(abs(result.up),abs(result.down));	//���ӷ�ĸ�����Լ��
		result.up /= d;	//Լȥ���Լ�� 
		result.down /= d;	 
	} 
	return result; 
} 
int main(){
	Fraction str;
	while(scanf("%d %d",&str.up,&str.down)!=EOF){
		printf("%d\n",cmp(str)); 
	}
	return 0;
} 
