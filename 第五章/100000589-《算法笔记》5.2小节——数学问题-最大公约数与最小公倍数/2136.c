/*2136
## ��Ŀ����
- The least common multiple (LCM) of a set of positive integers is the smallest positive integer which is divisible by all the numbers in the set.
- For example, the LCM of 5, 7 and 15 is 105.
- ���������ϵ���С������(LCM)�ǿɱ������е�����������������С�����������磬5��7��15��LCM��105��

## ����
- Input will consist of multiple problem instances. 
- The first line of the input will contain a single integer indicating the number of problem instances. 
- Each instance will consist of a single line of the form m n1 n2 n3 ... nm where m is the number of integers in the set and n1 ... nm are the integers.
- All integers will be positive and lie within the range of a 32-bit integer.
- ���뽫�ɶ������ʵ����ɡ�����ĵ�һ�н�����������������ʾ����ʵ����������
- ÿ��ʵ�����ɵ�����ɣ���ʽΪm n1 n2 n3.��Nm������m�Ǽ����е���������n1.��NMΪ������������������Ϊ��������λ��32λ�����ķ�Χ�ڡ�

## ���
- For each problem instance, output a single line containing the corresponding LCM. All results will lie in the range of a 32-bit integer.
- ����ÿ������ʵ�������������ӦLCM��һ�С����н������λ��32λ������Χ�ڡ�

˼��
	- �������ݵ���С��������ֻ��Ӹ�ѭ������
	- ע���һ��ʱ gcd=1  ����д����ֹ��� 
*/
#include <stdio.h>
int gcd(int a,int b){	//�ݹ�д�� �������Լ�� 
	if(b==0)	return a;
	else return gcd(b,a%b);
}
int main(){
	int n,str,i,m;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			scanf("%d",&m);
			int d=1;
			for(i=0;i<m;i++){
				scanf("%d",&str);
				d=d/gcd(d,str)*str;	//�����С������ ����һ��ʱ gcd=1  ����д����ֹ���
			}
			printf("%d\n",d);  
		}
	}
	return 0;
}  

 
