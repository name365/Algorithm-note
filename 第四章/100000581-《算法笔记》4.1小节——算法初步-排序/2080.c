/*2080
˼��
	- ����10���������˴��Կո�ָ������������Ժ����(Ҳ���ո�ָ�)��
	- ��������е�����,�����Ӵ�С���У� 
	- Ȼ��������е�ż��,������С�������С�
	-��������������п�����ȡ��������ݣ�ע�������ʽ�� 
*/
#include <stdio.h>
int cmp ( const void *a , const void *b ) //��С�������� 
{ 
  return *(int *)a - *(int *)b; 
} 
int main(){
	int Odd[10]={0},Even[10]={0},i,m=0,n=0,num;
	while(scanf("%d",&num)!=EOF){
		if(num%2)	Odd[m++]=num; //�洢���� 
		else	Even[n++]=num; //�洢ż�� 
		if(m+n==10){
			qsort(Odd,m,sizeof(int),cmp); //������С�������� 
			qsort(Even,n,sizeof(int),cmp); //ż����С�������� 
			for(i=m-1;i>=0;i--){ //�����������ΪҪ�Ӵ�С������������� 
				printf("%d ",Odd[i]);
			} 
			for(i=0;i<n;i++){ //���ż�� 
				printf("%d ",Even[i]);
			}
			printf("\n");
			m=n=0; //������б�����0 
		}
	} 
	return 0;
} 
