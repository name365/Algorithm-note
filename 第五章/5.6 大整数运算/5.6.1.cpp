/*�������洢*/
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
int cmp(bign a,bign b){	//�Ƚ�a��b��С��a����ȡ�aС�ֱ𷵻�1��0��-1 
	if(a.len >b.len)	return 1;	//a�� 
	else if(a.len <b.len)	return -1;	//aС
	else{
		for(int i=a.len-1;i>=0;i--){	//�Ӹ�λ����λ�Ƚ� 
			if(a.d[i] >b.d[i])	return 1;	//ֻҪ��һλa����a��
			else if(a.d[i]<b.d[i])	return -1;	//ֻҪ��һλaС����aС 
		}
		return 0;	//������� 
	} 
}
int main(){
	
	return 0;
}

 
