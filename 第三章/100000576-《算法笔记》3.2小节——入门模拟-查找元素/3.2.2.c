#include <stdio.h>
int main(){
	int i,n,x,a[200];
	while(scanf("%d",&n) !=EOF){ //����������� 
		for(i=0;i<n;i++){
			scanf("%d",&a[i]); //����n���� 
		}
		scanf("%d",&x);
		for(i=0;i<n;i++){ //�������� 
			if(a[i]==x){ //����ҵ���x 
				printf("%d\n",i); //�����Ӧ�±� 
				break; //�˳����� 
			}
		}
		if(i==n){ //���û�ҵ� 
			printf("-1\n"); //���-1 
		}
	}
	return 0;
}
