/*5038
˼��
	- ������һ�ٿ�Ķ�����ֽ������Ϊ50 20 10 5 1 ���֡�
	- ����֪��Ҫ�Ҷ���Ǯn��С��������£����ֽ���������ٵķ����� 1<=n<=99; 
	- ����ÿ��������Ϊ0��ֽ�ң�������ǵ���ֵ*�������ټ�������� 
*/
#include <stdio.h>
int main(){
	int n,i;
	int str[]={50,20,10,5,1}; //�洢��ֵ
	while(scanf("%d",&n)!=EOF){
		int b[5]={0}; //���� 
		int flag=1; //�жϼӺ����
		for(i=0;i<5&&n>0;i++){
			if(n>=str[i]){
				b[i]=n/str[i];
				if(b[i]){
					if(flag){
						printf("%d*%d",str[i],b[i]);
						flag=0; 
					}else{
						printf("+%d*%d",str[i],b[i]);
					}
				}
				n=n%str[i];
			}
		} 
		printf("\n");
	} 
	return 0;
}



