/*���� C: ���ϲ�����(���Ա�)
	- m,n�ֱ�ΪL1��L2�������ݽ�������Ҫ�����һ�㷨��������ٶȽ�����ϲ���һ����ͷ����ѭ��������
	- ����һ�����ƣ�ֻ������������ 
*/
#include <stdio.h> 
struct node{	//ѧ�źͳɼ��Ľṹ�� 
   int no;
}str[10000];
int main(){
	int m,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)	//����n��Ԫ�ش���ṹ���� 
        scanf("%d",&str[i].no);
    scanf("%d",&m);
    for(i=n;i<n+m;i++)	// ����m��Ԫ�ش���ṹ����
        scanf("%d",&str[i].no);
    for(i=0;i<m+n;i++)	//��� 
        printf("%d ",str[i].no);
	return 0;
}

