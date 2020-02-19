/*1982
思考
	- 判断给定表达式中的括号是否匹配，表达式中的合法括号为”(“, “)”, “[", "]“, “{“, ”}”,
	- 这三个括号可以按照任意的次序嵌套使用，若其中的括号是匹配的，则输出”yes”，否则输出”no”。
	- 利用map映射和栈的方式，调用相关函数判断其括号是否匹配。	
*/
#include <stdio.h>
#include <stack>
#include <map>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();	//吸收整数输入后的换行符 
	map<char,char> mp;
	mp[']']='[';
	mp[')']='(';
	mp['}']='{';
	char str[10001];
	stack<char> st;
	while(n--){
		while(!st.empty())	st.pop();	//清空循环外面定义的栈 
		gets(str);
		int flag=1;	 //符号是平衡的 
		for(int i=0;str[i];i++){
			if(str[i]=='[' || str[i]=='(' || str[i]=='{')
				st.push(str[i]);
			else if(str[i]==']' || str[i]==')' || str[i]=='}'){
				if(st.empty() || st.top() != mp[str[i]]){
					flag=0;
					break;
				}else	st.pop();
			}
		}
		if( !st.empty() || !flag)	printf("no\n");
		else	printf("yes\n");
	}
	return 0;
} 

 
