/*1968
˼��
	- ����20������ÿ��������1-10֮�䣬��1-10�е�����
	- ���������ǳ��ִ������������������һ��������������������Ȩֵ��С����һ������
	- ע���������һ��������������������Ȩֵ��С����һ����
*/
#include <stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int str[12]={0};
		str[n]++;
		for(i=1;i<20;i++){
			scanf("%d",&n);
			str[n]++;
		}
		int temp=0,max=str[0];
		for(i=1;i<11;i++){
			if(str[i]>max){
				max=str[i];
				temp=i;
			}
		}
		printf("%d\n",temp);
	}
	return 0;
} 
