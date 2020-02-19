#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <map>
using namespace std;
struct node{
	double num;	//������
	char op;	//������
	bool  flag;	 
};
string str;
stack<node> s;	//������ջ
queue<node> q;	//��׺���ʽ����
map<char,int> op;
void change(){	//����׺���ʽת��Ϊ��׺���ʽ 
	double num;
	node temp;
	for(int i=0;i<str.length();){
		if(str[i] >= '0' && str[i] <='9'){	//��������� 
			temp.flag = true;	//����������� 
			temp.num = str[i++] - '0';	//��¼����������ĵ�һ����λ 
			while(i<str.length() && str[i] >= '0' && str[i] <= '9'){
				temp.num = temp.num *10 + (str[i] - '0');	//�������������
				i++; 
			}
			q.push(temp);	//�����������ѹ���׺���ʽ�Ķ��� 
		}else{
			temp.flag=false;	//����ǲ����� 
			while(!s.empty() && op[str[i]] <= op[s.top().op]){
				q.push(s.top());
				s.pop();
			} 
			temp.op = str[i];
			s.push(temp);	//���ò�����ѹ�������ջ��
			i++; 
		} 
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
}
double cal(){	//�����׺���ʽ 
	double temp1,temp2;
	node cur,temp;
	while(!q.empty()){	//ֻҪ��׺���ʽ���зǿ� 
		cur = q.front();	//cur��¼����Ԫ��
		q.pop();
		if(cur.flag == true)	s.push(cur);	//����ǲ�������ֱ��ѹ��ջ
		else{	//����ǲ����� 
			temp2 = s.top().num;
			s.pop();
			temp1 = s.top().num;
			s.pop();
			temp.flag = true;	//��ʱ��¼������
			if(cur.op == '+')	temp.num = temp1 +temp2;
			else if(cur.op == '-')	temp.num = temp1-temp2;
			else if(cur.op == '*')	temp.num = temp1*temp2;
			else	temp.num = temp1/temp2;
			s.push(temp); //���ò�����ѹ��ջ�� 
		} 
	}
	return s.top().num;	//ջ��Ԫ�ؼ���׺���ʽ��ֵ 
}
int main(){
	op['+'] = op['-']=1;	//�趨�����������ȼ�
	op['*'] = op['/']=2;
	while(getline(cin,str),str != "0"){
		for(string::iterator it=str.end();it != str.begin();it--){
			if(*it==' ')	str.erase(it);	//�����ʽ�еĿո�ȥ�� 
		}
		while(!s.empty())	s.pop();	//��ʼ��ջ 
		change();
		printf("%.2lf\n",cal());	//�����׺���ʽ 
	}	
	return 0;
}	 



 
