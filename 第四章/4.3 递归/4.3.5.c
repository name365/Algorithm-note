/*n�ʺ����
*/
#include <stdio.h>
typedef int bool; //�Զ���bool�� C 
#define  true 1
#define false 0 
int str[1000],count=0,num,P[1000];
bool hashTable[10]={false}; //��¼���� i�Ƿ��Ѿ���P�� 
void generateP(int index){
	int i,j;
    if(index==9){ //�ﵽ�ݹ�߽磬����һ���Ϸ����� 
        count++; //�ܴﵽ�����һ���ǺϷ��� 
        return;
    }
    for(i=1;i<=8;i++){ //�� i�� 
        if(hashTable[i]==false){ //�� i�л�û�лʺ� 
            bool flag=true; //��ʾ��ǰ�ʺ󲻻��֮ǰ�ʺ����ͻ 
            for(j=1;j<index;j++){ //����֮ǰ�Ļʺ� 
                if(abs(j-index)==abs(i-P[j])){ //�� j�лʺ���к�Ϊ i,��index�лʺ���к�ΪP[j] 
                    flag=false; //��֮ǰ�Ļʺ���һ���Խ��ߣ���ͻ 
                    break;
                }
            }
            if(flag){ //������԰ѻʺ���ڵ� i�� 
                P[index]=i; //���index�лʺ���к�Ϊ i 
                hashTable[i]=true; //�� i���ѱ�ռ�� 
                generateP(index+1); //�ݹ鴦���index+1�лʺ� 
                hashTable[i]=false; //�ݹ���ϣ���ԭ��i��Ϊδռ�� 
            }
        }
    }
} 
int main(){
	
	return 0;
} 
