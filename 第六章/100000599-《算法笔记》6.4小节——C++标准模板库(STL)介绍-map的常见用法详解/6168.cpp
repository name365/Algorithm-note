/*6168 
����
	- ����һ�λ�, �ҳ�����Ƶ�����ĵ���, ����һ������ֻ��[0�C9, a�Cz, A�CZ]���ɣ�
	- ��ĸ�����ִ�Сд�������Сд��ĸ����� 
˼��
	- ֱ����map���д�Ƶͳ�ƣ�Ȼ���������Ƶ����ߵĵ��ʼ��ɣ�map��֤���ֵ���
	- ����Ԥ����ʱȥ�������ַ����ֿ��������ʡ�
*/
#include <iostream> 
#include <map>
using namespace std;
int main(){
	map<string,int> mp;	//mp�����ַ������ֵĴ��� 
	string str;
	while(cin>>str){	//�����ַ��� 
		string num;	//���� 
		for(int i=0;i<str.length();i++){
			//����ǵ��ʵ��ַ� 
			if((str[i]>='0' && str[i]<='9') || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
				if(str[i]>='A' && str[i]<='Z')	num += str[i]+'a'-'A';	//����д��ĸת��ΪСд��ĸ 
				else num += str[i];	//����ĩβ���ϸ��ַ� 
			}else if(num != ""){
				mp[num]++;
				num="";
			}
		}
		if(num != "")	mp[num]++;	//���ʷǿգ�������� 1 
	}
	string ans;	//��ų��ִ������ĵ��� 
	int MAX=0;	//��¼�������ĵ��ʵĴ��� 
	for(map<string,int>::iterator it=mp.begin();it != mp.end();it++){
		if(it->second >MAX){	//Ѱ�ҳ��ִ������ĵ��� 
			MAX=it->second;
			ans=it->first;
		}
	}
	cout<<ans<<" "<<MAX<<endl;	//������ 
	return 0;
} 
