/*���� E: ���ݹ����š���ջ����ͳ��
	- ��һ�����̲�ģ�����ջ�Ĺ��̣�����ͨ��ѭ���ӵݹ���ʵ�ֻ��ݣ��ظ������Ĺ��̣�
	- ������Խ�ջ���һ��Ԫ�أ�������Գ�ջ���һ��Ԫ�ء�������һ��һ������̽��ȥ������ջԪ�ظ����ﵽnʱ�ͼ���һ�Ρ�
	 
˼��
	- ȫ�������Ǽ���n�����ĳ�ջ���� 

*/
#include <stdio.h>
int n,sum=0;
void DFS(int push,int pop){	//push:��ջ���� pop:��ջ����
	if(pop>push || pop>n || push>n)	return;
	if(push==pop && push==n){
		sum++;
		return;
	}
	DFS(push+1,pop);
	DFS(push,pop+1);
}
int main(){
	scanf("%d",&n);
	sum=0;
	DFS(0,0);
	printf("%d\n",sum);
	return 0;
}


