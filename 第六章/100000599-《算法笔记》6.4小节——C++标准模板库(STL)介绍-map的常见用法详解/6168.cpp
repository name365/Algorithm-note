/*6168 
大意
	- 输入一段话, 找出出现频率最大的单词, 其中一个单词只由[0–9, a–z, A–Z]构成，
	- 字母不区分大小写，且最后按小写字母输出。 
思考
	- 直接用map进行词频统计，然后输出出现频率最高的单词即可，map保证了字典序。
	- 需在预处理时去掉特殊字符并分开各个单词。
*/
#include <iostream> 
#include <map>
using namespace std;
int main(){
	map<string,int> mp;	//mp计数字符串出现的次数 
	string str;
	while(cin>>str){	//读入字符串 
		string num;	//单词 
		for(int i=0;i<str.length();i++){
			//如果是单词的字符 
			if((str[i]>='0' && str[i]<='9') || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
				if(str[i]>='A' && str[i]<='Z')	num += str[i]+'a'-'A';	//将大写字母转化为小写字母 
				else num += str[i];	//单词末尾添上该字符 
			}else if(num != ""){
				mp[num]++;
				num="";
			}
		}
		if(num != "")	mp[num]++;	//单词非空，令次数加 1 
	}
	string ans;	//存放出现次数最多的单词 
	int MAX=0;	//记录出现最多的单词的次数 
	for(map<string,int>::iterator it=mp.begin();it != mp.end();it++){
		if(it->second >MAX){	//寻找出现次数最多的单词 
			MAX=it->second;
			ans=it->first;
		}
	}
	cout<<ans<<" "<<MAX<<endl;	//输出结果 
	return 0;
} 
