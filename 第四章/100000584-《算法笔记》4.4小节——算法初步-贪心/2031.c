/*2031
题目大意
	- 给定若干加油站信息，问能否驾驶汽车行驶一定的距离。
	- 如果能够行驶完全程，则计算最小花费。若不能行驶完全程，则最远能够行驶多长距离。 
思考
	- 首先判断汽车是否能够行驶到终点。什么情况下汽车无法行驶到终点呢？
	- 两种情况：起点根本就没有加油站，汽车无法启动；
	- 或者中途两个加油站之间的距离大于加满油后汽车能够行驶的最大距离。
	- 前者汽车行驶的最大距离为0.00，
	- 后者最大距离为当前加油站的距离加上在这个加油站加满油后能够行驶的最大距离。
	- 在这里，需要将加油站按到杭州的距离从小到大排序。
	- 接下来在能够行驶到终点的情况下计算最小花费。
	- 我们首先从路程来考虑，如果在路上，我们能够使用最便宜的汽油，当然就在那个加油站加油了。
	- 所以从起点开始遍历每个加油站。假设遍历到了第i个加油站，我们现在来判断在加油站i应该加多少油。
	- 设当前汽车离杭州的距离为curLen，当前加油站离杭州的距离为nodes[i].dis，
	- 加满油以后汽车能够行驶的最大距离为（dis=cmax*len）。
	- 这样就有node[i].dis <= curLen <= nodes[i].dis+dis，否则的话第i个加油站的油是不起作用的。
	- 于是在第i个加油站的作用范围内寻找有没有更为便宜的加油站，
	- 如果有，则下次使用这个加油站的油（j），这次汽车应该行驶到这个加油站，即touch=nodes[j].dis。
	- 如果没有找到更为便宜的加油站则可以在第i个加油站加满油，即touch=nodes[i].dis+dis。
	- 然后判断下次应该行驶到的距离与当前距离的关系，如果下次应当行驶到的距离大于当前距离，则汽车行驶，
	- 否则不动（也就是说上个加油站的油更便宜，后一个加油站也便宜，根本就不需要在当前加油站加油）。 
*/
#include <stdio.h>
typedef struct{
    double price,len;
}node;
int cmp(const void *a, const void *b){ 
	node A = *(node*) a;
	node B = *(node*) b; 
    return A.len - B.len;
}
int main() {
    double C, D, davg, maxdis;
    int n,i;
    node st[1010];
    scanf("%lf %lf %lf %d", &C, &D, &davg, &n);
    maxdis = C*davg; //满箱的油所能走的距离
    for(i = 0; i < n; i++) {
        scanf("%lf %lf", &st[i].price, &st[i].len);
    }
    qsort(st,n,sizeof(node),cmp); //按到杭州的距离从小到大排序
    st[n].len = D; //  终点离杭州的距离为d
    st[n].price = 0; // 终点不需要加油
    if(st[0].len != 0) {   //因为一开始没有油,而起始点并没有加油站,开不出去
        printf("The maximum travel distance = 0.00\n");
    }else {
        int number = 0; //当前所在的站号
        double sum = 0, oils = 0;
        while(number < n) {
            int k = -1; //初始化油价最低的站号
            double priMin = 1000000000;
            for(i = number+1; i <= n && st[i].len - st[number].len <= maxdis; i++) {//找满油能够到达的油价最低的站
                if(st[i].price < priMin) {  //找到当前的最低油价
                    priMin = st[i].price;
                    k = i;
                    if(st[number].price > priMin) {    //如果这个最低油价比当前站的油价还要低就不找了,直接加油,出发去这个站
                        break;
                    }
                }
            }
            if(k == -1)   break; //未能进入for循环即加满油也到不了下一个站,此时不需要继续了,直接在最后输出最长距离
            double need = (st[k].len-st[number].len)/davg; //计算从本站到达k站所需要的油量
            if(priMin < st[number].price) {    //如果当前站的油价比k站的高,我们就加正好到k站的油量need
                if(oils < need) {    //查看油缸里的油是否够到k站,如果不够就要加到够
                    sum += (need-oils) * st[number].price; // 加正好足need的油
                    oils = 0; //到k站正好用光
                }else { //如果已经够了,就直接从油缸里减去到k站所需要的油量need
                    oils = oils-need;
                }
            }else { //如果没有比本站便宜的油价,就在本站加满油,并去往已经选出来的相对低价的k站
                sum += (C-oils)*st[number].price; //加满油
                oils = C-need; //剩下的油量就是满油减去去往k站的油
            }
            number = k; //将当前站设为k,表示已经到达k站
        }
        if(number == n) {  //到达了终点
            printf("%.2lf\n", sum);
        }else { //不能到终点,只能在当前站加满油尽可能的跑远
            printf("The maximum travel distance = %.2lf\n", st[number].len + maxdis);
        }
    }
    return 0;
}
