/*���� B: C����-��������
	- ��a��b��������ÿ�������еĽ�����ѧ�š��ɼ���Ҫ�����������ϲ�����ѧ���������С�
	- ��һ�У�a��b��������Ԫ�ص�����N��M,�ÿո������ ������N����a������ Ȼ��M����b������ ÿ��������ѧ�źͳɼ����������
˼��
	- �Զ���һ���ṹ���飬�Զ���һ�������� 
	- ������n�У�������m�У�����Ϊһ���µ�����
	- ������������� 
*/
#include<stdio.h>
struct node{	//ѧ�źͳɼ��Ľṹ�� 
   int no;
   int score;
}ans[10000];
int cmp(const void *a ,const void *b){ //�Զ���һ�������� 
  return *(int *)a - *(int *)b; 
}
int main(){
    int n,m,i;
    while(scanf("%d %d",&n,&m)!=EOF){
        for(i=0;i<n;i++)	//����n��Ԫ�ش���ṹ���� 
            scanf("%d %d",&ans[i].no,&ans[i].score);
        for(i=n;i<n+m;i++)	// ����m��Ԫ�ش���ṹ����
            scanf("%d %d",&ans[i].no,&ans[i].score);
        qsort(ans,m+n,sizeof(ans[0]),cmp);	//��С�������� 
        for(i=0;i<m+n;i++)	//��� 
            printf("%d %d\n",ans[i].no,ans[i].score);
    }
    return 0;
}


