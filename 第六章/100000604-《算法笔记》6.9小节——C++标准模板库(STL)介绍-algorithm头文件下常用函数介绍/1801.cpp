/*1801
˼��
	- N���������ֵ����Сֵ��N<=10000����������ľ���ֵ������10^6
	- ֱ�ӵ��ú��� max()��min()���� 
	
*/
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int N;
	while(scanf("%d",&N)!=EOF){
		int num,maxs= -1100000,mins=1100000;	//��������ľ���ֵ������10^6
		for(int i=0;i<N;i++){
			scanf("%d",&num);
			maxs=max(maxs,num);
			mins=min(mins,num);
		}
		printf("%d %d\n",maxs,mins);
	} 
	return 0;
}



 
