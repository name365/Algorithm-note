/*1982
˼��
	- �жϸ������ʽ�е������Ƿ�ƥ�䣬���ʽ�еĺϷ�����Ϊ��(��, ��)��, ��[", "]��, ��{��, ��}��,
	- ���������ſ��԰�������Ĵ���Ƕ��ʹ�ã������е�������ƥ��ģ��������yes�������������no����
	- ����mapӳ���ջ�ķ�ʽ��������غ����ж��������Ƿ�ƥ�䡣	
*/
#include <stdio.h>
#include <stack>
#include <map>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();	//�������������Ļ��з� 
	map<char,char> mp;
	mp[']']='[';
	mp[')']='(';
	mp['}']='{';
	char str[10001];
	stack<char> st;
	while(n--){
		while(!st.empty())	st.pop();	//���ѭ�����涨���ջ 
		gets(str);
		int flag=1;	 //������ƽ��� 
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

 
