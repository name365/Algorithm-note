/*


*/
#include <stdio.h>
#include <queue>
using namespace std;
struct node{
	int data;
}a[10];
int main(){
	queue<node> q;
	for(int i=1;i<=3;i++){
		a[i].data = i;
		q.push(a[i]);
	}
	q.front().data=100;
	printf("%d %d %d\n",a[1].data,a[2].data,a[3].data);
	a[1].data=200;
	printf("%d\n",q.front().data);
	return 0;
} 


 
