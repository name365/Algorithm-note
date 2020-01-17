/*2680
��Ŀ����
	The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest distance between any pair of exits.
	������ĺܼ򵥣��������ٹ�·�ϵ�N�����ڣ��γ�һ���򵥵�ѭ������Ӧ��˵���κ�һ�Գ���֮�����̾��롣
����
	Each input file contains one test case. For each case, the first line contains an integer N (in [3, 105]), followed by N integer distances D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN is between the N-th and the 1st exits. All the numbers in a line are separated by a space. The second line gives a positive integer M (<=104), with M lines follow, each contains a pair of exit numbers, provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 107.
	ÿ�������ļ�������һ������������
	����ÿ���������һ�а�������N(��[3��105]��)�����N����������d1d2...Dn��
	����Di�ǵ�i�����ں͵�(i+1)������֮��ľ��룬Dn�ǵ�N���͵�һ������֮��ľ��롣
	һ���е��������ֶ��ÿո�ָ���
	�ڶ��и���������M(<=104)���������M�У�ÿ�ж�����һ�Գ��ڱ�ţ�ǰ���ǳ��ڱ�Ŵ�1��N����֤�����ܾ��벻����107��
���
	For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.
	����ÿ��������������M�д�ӡ�����ÿ�а�����Ӧ�ĸ������ڶ�֮�����̾��롣	
˼�� 
	- ���⣺����N������֮��ľ��룬Ȼ������M�Գ��ڣ�������M�Գ���֮�����̾���,
	- ���ȣ�������ÿ���ߵ�ʱ�򣬾ͼ�����������
	- һ������������ܾ��룬��һ��num�ۼӾͿ�ʵ�֣�
	- ��һ�����ǵ�һ����������������ľ��룬��һά����ʵ�֣�
	- ÿ�������ֵ��������ľ��������һ�������ֵ����ʼ��1��������ֵ��Ϊ0����Ϊ1��1�������0��
	- �ٸ���������������㣬�����ǺͶ���1֮��ľ���������͵õ�������һ�����룬
	- ��һ������ͨ�������ܾ����ȥ���������ܵõ��ˣ�
	- Ȼ��Ƚ������Ĵ�С�������С�ģ� 
*/ 
#include <stdio.h>
int main(){
	int n,m,i,a[100000],b[100000],num=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		num +=  a[i]; //�����ܾ���
		b[i+1]=b[i]+a[i]; //��һ����������������ľ���
	} 
	int f1,f2,k1,k2;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&f1,&f2);
		int t1=(f1<f2?f1:f2);
		int t2=(f1>f2?f1:f2);
		k1=b[t2]-b[t1];
		k2=num-k1;
		printf("%d\n",(k1>k2?k2:k1));
	}
	return 0;
} 
