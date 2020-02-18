/*1918
思考
	- 读入一个只包含 +, -, *, / 的非负整数计算表达式，计算该表达式的值。
	- 当一行中只有0时输入结束，相应的结果不要输出。没有非法表达式。该表达式的值，精确到小数点后2位。 
	- 这题比较难，不太会，只能多方参考。
	- 这道题里面只有+, -, ×, / 四种运算符，没有括号之类的。用后缀表达式的方法可能会麻烦，
	- 而把每一次计算的结果都存入栈中，最后的结果相加，具体的思路如下：
	- 遍历字符串的时候，用一个字符数组num存储数字，然后将字符转换为数值，将该数值存放到栈中；
	- 对于第一个数字，因为此时没有栈顶元素，所以直接让它进栈。 
注意 
	- 当前遍历的运算符优先级小于等于操作符栈顶的优先级时，此时因将操作符栈顶的元素出栈，
	- 但是一定要循环出栈到当前遍历的运算符优先级大于操作符栈顶的优先级为止。 
*/
#include <stdio.h> 
#include <iostream>
#include <stack>
#include <map>
using namespace std;
void cmp(char c,stack<double> &num){
	double n1,n2,sum;
	n2=num.top();
	num.pop();
	n1=num.top();
	num.pop();
	if(c=='+')	sum=n1+n2;
	if(c=='-')	sum=n1-n2;
	if(c=='*')	sum=n1*n2;
	if(c=='/')	sum=n1/n2;
	num.push(sum);
} 
int main(){
	string s;
	while(getline(cin,s), s !="0"){
		stack<double> num;	//操作数栈
		stack<char> kd;	//运算符栈
		map<char,int> m;	//存放运算符和对应的优先级
		m['+']=1;
		m['-']=1;
		m['*']=2;
		m['/']=2;
		double wa=0;
		for(int i=0;i <= s.size();i++){
			if(s[i] >= '0' && s[i] <= '9')
				wa=wa*10+(double)(s[i]-'0');
			else if(i==s.size())
				num.push(wa);
			else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				num.push(wa);
				wa=0;		
				if(!kd.empty()){	//需要用到 kd.top()时一定要先判断 kd.empty()
					while(!kd.empty() && m[s[i]] <= m[kd.top()]){
						cmp(kd.top(),num);
						kd.pop();
					}
				}
				kd.push(s[i]);
			}
		}
		while(!kd.empty()){
			cmp(kd.top(),num);
			kd.pop();
		}
		printf("%.2lf\n",num.top());
	}
	return 0;
}

 
