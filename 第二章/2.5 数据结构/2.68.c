#include <stdio.h>
int main(){
	char str[5][5];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			str[i][j]=getchar();//��getchar()���뵥������ 
		}
		getchar();	//�����Ϊ�˰�������ÿ��ĩβ���з����յ� 
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			putchar(str[i][j]);//��putchar()��������ַ� 
		}
		putchar('\n');//�����Ϊ�˰������ÿ��ĩβ���з����յ� 
	}
	return 0;
}
