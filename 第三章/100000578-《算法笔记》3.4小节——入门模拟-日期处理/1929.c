/*
��ķ����ɭ���㹫ʽ
	W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7
	�ڹ�ʽ��d��ʾ�����е�������m��ʾ�·�����y��ʾ������

ע�⣺�ڹ�ʽ���и���������ʽ��ͬ�ĵط���
	  ��һ�ºͶ��¿�������һ���ʮ���º�ʮ���£�
	  ���������2004-1-10����ɣ�2003-13-10�����빫ʽ���㡣
*/
#include <stdio.h>
char *week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

char *month[]={"January","February","March","April","May","June",
	"July","August","September","October","November","December"};

int main(){
	int y,m,d,i;
	char mon[15];
	while(scanf("%d %s %d",&d,mon,&y)!=EOF){
		for(i=0;i<12;i++) //����Ѱ���·ݣ����·�ת��Ϊ���� 
			if(!strcmp(mon,month[i])) break;
		m=i+1;
		if(m==1||m==2) { //�滻����һ���ʮ���º�ʮ����������� 
			m+=12;y--;
		}
		int a = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7; //���ù�ʽ���������� 
		printf("%s\n",week[a]);
	}
	return 0;
}
