/*1978
˼��
	- ����һ��m��m�еģ�1<m<10���ķ�������ÿһ�У�ÿһ�м����Խ���Ԫ��֮�ͣ� 
	- ������һ��m,�ٽ�����һ��m��m�еĶ�ά���鷽��str[m][m]�� 
	- �Զ����������������Ӵ�С���е�һ��������
	- �����˳������������С��С����Խ�����͹���ʮ�����ݣ�
	- ע���ʽÿ���������һ���ո�����С� 
*/
#include <stdio.h>
int cmp ( const void *a , const void *b )  //�Ӵ�С���� 
{ 
  return *(int *)b - *(int *)a; 
} 
int main(){
	int m,i,j;
	while(scanf("%d",&m)!=EOF){
		int str[11][11]={0},len=2*m+2; //2*m+2������Ӧ�ô洢�Ĵ�С 
		int temp[20]={0},k=0; //ÿ�δ洢�������Ҫ���,Ҫ����20 ����Ȼ�޷�ͨ�� 
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				scanf("%d",&str[i][j]);
				temp[k] += str[i][j]; //����ÿ�еĺ�
			}
			k++; 
		}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				temp[k] += str[j][i]; //����ÿһ�еĺ� 
			}
			k++;
		}
		for(i=0;i<m;i++){
			temp[k] += str[i][i]; //�������Խ��� 
		}
		k++;
		for(i=m-1;i>=0;i--){
			temp[k] += str[m-i-1][i]; //���㸱�Խ��� 
		}
		qsort(temp,len,sizeof(int),cmp); //���������� 
		for(i=0;i<len;i++){
			printf("%d",temp[i]);
			if(i<len-1) printf(" "); //���һ�������޿ո� 
		}
		printf("\n");
	}
	return 0;
}
