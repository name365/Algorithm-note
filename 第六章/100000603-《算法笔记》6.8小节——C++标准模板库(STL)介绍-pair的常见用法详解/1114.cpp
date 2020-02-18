/*1114
思考
	- 一道简单的计算题，三角形ABC的重心G(x, y)的坐标公式为：
	- x=(x1+x2+x3)/3  ； y=(y1+y2+y3)/3 
	- 只需读入三组浮点数，计算即可。 
*/
#include <stdio.h>
#include <map>
using namespace std;
int main() {
    int N;
    pair<double,double> p;	//一个临时值 
	while(scanf("%d",&N),N!=0){
		while(N--){
			pair<double,double> sum;	//最终结果 
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


 
