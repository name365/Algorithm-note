//������������У��Ӻ���ǰ�������ڴ����������ƣ�Ȼ�󽫴������룬������������
#include <stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	int d=a[9],p=8;
	while(a[p]>d){
		a[p+1]=a[p];
		p--;
	}
	a[p+1]=d;
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	return 0;
}
