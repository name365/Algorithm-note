#include <stdio.h>
#include <queue>
using namespace std;
struct node{
	int data;
}a[10];
int main(){
	queue<int> q;
	for(int i=1;i<=3;i++){
		a[i].data = i;
		q.push(i);
	}
	a[q.front()].data=100;
	printf("%d\n",a[1].data);
	return 0;
} 
