/*1114
˼��
	- һ���򵥵ļ����⣬������ABC������G(x, y)�����깫ʽΪ��
	- x=(x1+x2+x3)/3  �� y=(y1+y2+y3)/3 
	- ֻ��������鸡���������㼴�ɡ� 
*/
#include <stdio.h>
#include <map>
using namespace std;
int main() {
    int N;
    pair<double,double> p;	//һ����ʱֵ 
	while(scanf("%d",&N),N!=0){
		while(N--){
			pair<double,double> sum;	//���ս�� 
			for(int i=0;i<3;i++){
				scanf("%lf %lf",&p.first,&p.second);
				sum.first += p.first;
				sum.second += p.second;
			}
			printf("%.1lf %.1lf\n",sum.first/3.0,sum.second/3.0);
		}
	} 
    return 0;
}


 
