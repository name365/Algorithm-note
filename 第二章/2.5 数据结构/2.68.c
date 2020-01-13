#include <stdio.h>
int main(){
	char str[5][5];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			str[i][j]=getchar();//用getchar()输入单个函数 
		}
		getchar();	//这句是为了把输入中每行末尾换行符吸收掉 
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			putchar(str[i][j]);//用putchar()输出单个字符 
		}
		putchar('\n');//这句是为了把输出中每行末尾换行符吸收掉 
	}
	return 0;
}
