/*n�ʺ�ö�� 
*/
#include <stdio.h>
typedef int bool; //�Զ���bool�� C 
#define  true 1
#define false 0 
int count=0,n=8;
int P[11],hashTable[11]={false},n;
void generateP(int index){
	int i,j,x,n; 
	if(index==n+1){ //�ݹ�߽磬����һ������ 
		bool flag=true; //flagΪtrue��ʾ��ǰ����Ϊһ���Ϸ����� 
		for(i=1;i<=n;i++){ //�������������ʺ� 
			for(j=1;j<=n;j++){
				if(abs(i-j)==abs(P[i]-P[j])){ //�����һ���Խ����� 
					flag=false; //���Ϸ� 
				}
			}
		}
		if(flag) count++; //����ǰ�����Ϸ�����count��1 
		return;
	}
	for(x=1;x<=n;x++){
		if(hashTable[x]==false){
			P[index]=x;
			hashTable[x]=true;
			generateP(index+1);
			hashTable[x]=false;
		}
	}
}
int main(){
	
	return 0;
} 
