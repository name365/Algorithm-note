/*2043
思考
	- 按照白鼠重量从大到小的顺序输出它们头上帽子的颜色
	- 即定义一个自定义函数与一个结构体
	- 结构体存储数据、自定义从大到小排序 
	- 注意越界与输出要求 
*/
#include <stdio.h>
struct Mouse{
	int weight;
	char color[15];
}mon[110]; 
int cmp( const void *a , const void *b )  //从大到小排序 
{
	return *(int *)b - *(int *)a;  
}
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		for(i=0;i<N;i++){
			scanf("%d %s",&mon[i].weight,mon[i].color);
		}
		qsort(mon,N,sizeof(struct Mouse),cmp); //第一位是待排序的数组，第二位是排序数，第三位是每个排序单位的大小，第四个是规则
		for(i=0;i<N;i++){
			printf("%s\n",mon[i].color);
		}
	}
	return 0;
} 
