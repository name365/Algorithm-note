/*2134
思考
	- 每个测试用例从包含两个非负整数M和N的一行开始，
	- 然后是N行，每行分别包含两个非负整数J[i]和F[i]。
	- 最后一个测试用例后面跟2-1。所有整数都不大于1000。
	- 在一行中打印精确到小数点后3位的实数，这是FatMouse可以获得的最大JavaBeans数量。
	- 输入的同时记录每单位F对应多少的J，并按照J从大到小排序。
	- 遍历每个房间，若当前的m大于等于当前房间的F[i]，则对换，否则，按照比例对换。	
	- 先根据回报率排个序（回报率=J[i]/F[i] ，每磅猫粮可以获得多少磅Java豆），
	- 然后贪心方式进行累加，最后输出即可~
*/
#include<bits/stdc++.h>
using namespace std;
struct cat{
    double J; //食物
    double F; // 猫粮
}s[1010];
bool cmp(cat a, cat b) {
    return (a.F/a.J) < (b.F/b.J); //数值越小，表示可以用更少的猫粮换取更多的食物
}
int main() {
    int m, n, i; //分别表示 m 磅的猫粮 和 n行数据
    while(scanf("%d %d",&m,&n) && m != -1 && n != -1) {
        for(i = 0; i < n; i++) {
            scanf("%lf %lf",&s[i].J,&s[i].F);
        }
        sort(s, s+n, cmp);
        double sum = 0;
        for(i = 0; i < n; i++) {
            if(m >= s[i].F){ //当准备的猫粮可以换取一个房间的所有食物
                sum += s[i].J;
                m -= s[i].F;
            }else{//准备的猫粮可以换取一个房间的部分食物，按比例分配，此时，准备的猫粮完全换出了，可以直接退出循环
                sum += m / s[i].F * s[i].J;
                break;
            }
        }
        printf("%.3lf\n", sum);
    }
    return 0;
}
