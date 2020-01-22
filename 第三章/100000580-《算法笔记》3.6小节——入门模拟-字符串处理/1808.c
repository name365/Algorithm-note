/*1808
思考
	- 先将短字符数组转化为小写，再将字符串(用二维数组存储)转换为小写，
	- 判断二者是否相等，相等则为空，不等则输出
	- 注意要删除的字符不区分大小写 
*/
#include <stdio.h>
int main(){
	int num=0,i,j,k; //计数遍历 
	char cmp[1000][1000],duan[1000],chang[1000][1000];
	gets(duan);
	while(gets(cmp[num++]));
	for(i=0;i<strlen(duan);i++){
		if(duan[i]>='A'&&duan[i]<='Z'){ //全部转化为小写字母 
			duan[i]=duan[i]-'A'+'a';
		}
	}
	for(i=0;i<=num;i++){
		for(j=0;j<strlen(cmp[i]);j++){
			chang[i][j]=cmp[i][j]; //cmp复制到中
			if(cmp[i][j]>='A'&&cmp[i][j]<='Z'){ //大写转换为小写
				cmp[i][j]=cmp[i][j]-'A'+'a';
			}				
		}
		for(j=0,k=0;j<strlen(cmp[i]);) { //继续比较后一字符
			if(cmp[i][j+k]==duan[k]){
				k++;
				if(k==strlen(duan)){//匹配成功
					j=j+k;
				}
			}else{ //去掉空格
				if(cmp[i][j]!=' ') printf("%c",chang[i][j]);
				j++;k=0;
				}
			}										
		printf("\n");	
	} 
	return 0;
} 
