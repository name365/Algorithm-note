#include <stdio.h>
int main(){
	int n,i,k;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		int a[110]={0};
		for(i=0;i<n;i++){
			scanf("%d",&k);
			a[k]++; //��ͬ�ĳɼ����м����ۼ� 
//			printf("a[k]=%d ",a[k]); 
		}
		scanf("%d",&k);
		printf("%d\n",a[k]);
	}
	return 0;
} 
