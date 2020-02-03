/*n皇后枚举 
*/
#include <stdio.h>
typedef int bool; //自定义bool在 C 
#define  true 1
#define false 0 
int count=0,n=8;
int P[11],hashTable[11]={false},n;
void generateP(int index){
	int i,j,x,n; 
	if(index==n+1){ //递归边界，生成一个排列 
		bool flag=true; //flag为true表示当前排列为一个合法方案 
		for(i=1;i<=n;i++){ //遍历任意两个皇后 
			for(j=1;j<=n;j++){
				if(abs(i-j)==abs(P[i]-P[j])){ //如果在一条对角线上 
					flag=false; //不合法 
				}
			}
		}
		if(flag) count++; //若当前方法合法，令count加1 
		return;
	}
	for(x=1;x<=n;x++){
		if(hashTable[x]==false){
			P[index]=x;
			hashTable[x]=true;
			generateP(index+1);
			hashTable[x]=false;
		}
	}
}
int main(){
	
	return 0;
} 
