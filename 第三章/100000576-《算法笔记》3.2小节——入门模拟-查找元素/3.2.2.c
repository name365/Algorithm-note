#include <stdio.h>
int main(){
	int i,n,x,a[200];
	while(scanf("%d",&n) !=EOF){ //多组测试数据 
		for(i=0;i<n;i++){
			scanf("%d",&a[i]); //输入n个数 
		}
		scanf("%d",&x);
		for(i=0;i<n;i++){ //遍历数组 
			if(a[i]==x){ //如果找到了x 
				printf("%d\n",i); //输出对应下标 
				break; //退出查找 
			}
		}
		if(i==n){ //如果没找到 
			printf("-1\n"); //输出-1 
		}
	}
	return 0;
}
