/*���� C: ���ݹ����š����+�ж�����
	- �� n=4��k��3��4 �������ֱ�Ϊ 3��7��12��19 ʱ���ɵ�ȫ������������ǵĺ�Ϊ��
����- 3��7��12=22����3��7��19��29����7��12��19��38����3��12��19��34��
	- ���ڣ�Ҫ����������Ϊ�������ж����֡�
	- ����������ֻ��һ�ֵĺ�Ϊ������3��7��19��29��
	- ��һ������������n , k ��1<=n<=20��k��n�� 
	- �ڶ���n��������x1,x2����,xn ��1<=xi<=5000000�� 
˼�� 
	- ��n��������ѡk��������ͣ����ж����Ǹ��Եĺ��Ƿ�Ϊ����������������� 
	- ����DFS�ݹ���ͣ����жϽ���Ƿ�Ϊ����������
*/
#include <stdio.h>
#include <math.h>
int n,k,str[21],num,i;	//num���� 
int isprime(int sum){	//�Զ����ж��������� 
	int i;
	for(i=2;i <= sqrt(sum);i++){	//�������˼� = ���������Σ������� 
		if(sum%i==0)	return 0;	//������ 
	}
	return 1;	//�������� 
}
void DFS(int index,int count,int sum){	//index�ִ�����str���±�,count��ѡ���ָ���
	if(count==k){
		if(isprime(sum))	num++;
		return;
	} 
	if(index==n)	return;
	DFS(index+1,count+1,sum+str[index]);	//��ѡstr[index]
	DFS(index+1,count,sum);	//����ѡstr[index]
} 
int main(){
	scanf("%d %d",&n,&k);
	num=0;
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	DFS(0,0,0);	//��ʼ n��rΪ0
	printf("%d\n",num);
	return 0;
} 




 
