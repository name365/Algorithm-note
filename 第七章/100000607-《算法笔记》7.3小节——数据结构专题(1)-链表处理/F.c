/*���� F: �㷨2-25 ��������ɾ���ظ�Ԫ��
	- �����������������ݣ�ÿ���������ռһ�У���һ��Ϊ���ڵ���0������n����ʾ�õ�����ĳ��ȣ�
	- �������n����������ʾ�����ÿһ��Ԫ�ء�����֮���ÿո����
	- ���ÿ��������ݣ�����������У��ֱ���ɾ��ǰ��ɾ���������Ԫ�أ��ÿո����
	- �������Ϊ�գ���ֻ���һ�У�list is empty
˼��
	- ������ǰһ�����ƣ�ֻ������һ��ȥ�صĲ��衣 
*/
#include <stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int str[100010];
		if(n==0){
			printf("list is empty\n");
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
		for(i=0;i<n;i++){	//���ԭ���� 
			printf("%d ",str[i]);
		}
		printf("\n");
		printf("%d ",str[0]);	//�����һ���� 
		for(i=1;i<n;i++){
			if(str[i]==str[i-1])	continue;	//ȥ���ظ�Ԫ�� 
			else printf("%d ",str[i]);
		} 
		printf("\n");
	}
	return 0;
}




 
