/*1808
˼��
	- �Ƚ����ַ�����ת��ΪСд���ٽ��ַ���(�ö�ά����洢)ת��ΪСд��
	- �ж϶����Ƿ���ȣ������Ϊ�գ����������
	- ע��Ҫɾ�����ַ������ִ�Сд 
*/
#include <stdio.h>
int main(){
	int num=0,i,j,k; //�������� 
	char cmp[1000][1000],duan[1000],chang[1000][1000];
	gets(duan);
	while(gets(cmp[num++]));
	for(i=0;i<strlen(duan);i++){
		if(duan[i]>='A'&&duan[i]<='Z'){ //ȫ��ת��ΪСд��ĸ 
			duan[i]=duan[i]-'A'+'a';
		}
	}
	for(i=0;i<=num;i++){
		for(j=0;j<strlen(cmp[i]);j++){
			chang[i][j]=cmp[i][j]; //cmp���Ƶ���
			if(cmp[i][j]>='A'&&cmp[i][j]<='Z'){ //��дת��ΪСд
				cmp[i][j]=cmp[i][j]-'A'+'a';
			}				
		}
		for(j=0,k=0;j<strlen(cmp[i]);) { //�����ȽϺ�һ�ַ�
			if(cmp[i][j+k]==duan[k]){
				k++;
				if(k==strlen(duan)){//ƥ��ɹ�
					j=j+k;
				}
			}else{ //ȥ���ո�
				if(cmp[i][j]!=' ') printf("%c",chang[i][j]);
				j++;k=0;
				}
			}										
		printf("\n");	
	} 
	return 0;
} 
