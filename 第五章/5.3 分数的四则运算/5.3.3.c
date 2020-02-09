/*�����ļ��� 
*/
#include <stdio.h>
int gcd(int a,int b){	//�����Լ�����ݹ�д�� 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
typedef struct{	//���� 
	int up,down;	//���ӡ���ĸ 
}Fraction;
Fraction cmp(Fraction result){	//�����Ļ��� 
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
Fraction minu(Fraction f1,Fraction f2){
	Fraction result;
	result.up = f1.up*f2.down-f2.up*f1.down;	//������ķ���
	result.down = f1.down * f2.down;	//������ķ�ĸ
	return cmp(result);	//���ؽ����ע�⻯�� 
}
void pus(Fraction r){
	r=cmp(r);
	if(r.down==1)	printf("%lld",r.up);
	else if(abs(r.up)>r.down){
		printf("%d %d/%d",r.up/r.down,abs(r.up)%r.down,r.down);
	}else{
		printf("%d/%d",r.up,r.down);
	}	
}
int main(){
	Fraction f1,f2;
	while(scanf("%d %d %d %d",&f1.up,&f1.down,&f2.up,&f2.down)!=EOF){
		pus(minu(f1,f2)); 
	}
	return 0;
} 

 
