/*ȫ���� 
*/
#include <stdio.h>
typedef int bool; //�Զ���bool 
#define false 0
#define true  1
int n,P[11],hashTable[11]={false}; //PΪ��ǰ���У�hashTable��¼����x�Ƿ��Ѿ���P�� 
void generateP(int index){ //��ǰ�������еĵ�index�� 
	int i,x;
	if(index==n+1){ //�ݹ�߽磬�Ѿ����������е�1~nλ 
		for(i=1;i<=n;i++){
			printf("%d",P[i]); //�����ǰ���� 
		}
		printf("\n");
		return;
	}
	for(x=1;x<=n;x++){ //ö��1~n����ͼ�� x����P[index] 
		if(hashTable[x]==false){ //��� x����P[0]~P[index-1]�� 
			P[index]=x; //��P�ĵ�indexλΪ x,����x���뵱ǰ���� 
			hashTable[x]=true; //��סx����P�� 
			generateP(index+1); //�������еĵ�index+1��λ 
			hashTable[x]=false; //�Ѵ�����P[index]Ϊx�������⣬��ԭ״̬ 
		}
	}
}
int main(){
	n=3; //�����1~3��ȫ���� 
	generateP(1); //��P[1]��ʼ�� 
	return 0;
}
