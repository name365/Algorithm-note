/*1918
˼��
	- ����һ��ֻ���� +, -, *, / �ķǸ�����������ʽ������ñ��ʽ��ֵ��
	- ��һ����ֻ��0ʱ�����������Ӧ�Ľ����Ҫ�����û�зǷ����ʽ���ñ��ʽ��ֵ����ȷ��С�����2λ�� 
	- ����Ƚ��ѣ���̫�ᣬֻ�ܶ෽�ο���
	- ���������ֻ��+, -, ��, / �����������û������֮��ġ��ú�׺���ʽ�ķ������ܻ��鷳��
	- ����ÿһ�μ���Ľ��������ջ�У����Ľ����ӣ������˼·���£�
	- �����ַ�����ʱ����һ���ַ�����num�洢���֣�Ȼ���ַ�ת��Ϊ��ֵ��������ֵ��ŵ�ջ�У�
	- ���ڵ�һ�����֣���Ϊ��ʱû��ջ��Ԫ�أ�����ֱ��������ջ�� 
ע�� 
	- ��ǰ��������������ȼ�С�ڵ��ڲ�����ջ�������ȼ�ʱ����ʱ�򽫲�����ջ����Ԫ�س�ջ��
	- ����һ��Ҫѭ����ջ����ǰ��������������ȼ����ڲ�����ջ�������ȼ�Ϊֹ�� 
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
		stack<double> num;	//������ջ
		stack<char> kd;	//�����ջ
		map<char,int> m;	//���������Ͷ�Ӧ�����ȼ�
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
				if(!kd.empty()){	//��Ҫ�õ� kd.top()ʱһ��Ҫ���ж� kd.empty()
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

 
