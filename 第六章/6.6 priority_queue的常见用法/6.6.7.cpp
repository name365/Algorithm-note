#include <iostream>
#include <string>
#include <queue>
using namespace std;
struct fruit{
	string name; 
	int price; 
}f1,f2,f3;
struct cmp{
	bool operator() (fruit f1,fruit f2){
		return f1.price >f2.price;
	}
};
int main(){
	priority_queue<fruit,vector<fruit>,cmp> q;
	f1.name="����";
	f1.price=3;
	f2.name="����";
	f2.price=4;
	f3.name="ƻ��";
	f3.price=1; 
	q.push(f1);
	q.push(f2);
	q.push(f3);
	cout << q.top().name << " " << q.top().price << endl;
	return 0;
}

