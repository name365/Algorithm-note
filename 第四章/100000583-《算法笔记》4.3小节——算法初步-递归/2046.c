/*2046
思考
	- 回溯法 
	- 皇后串x置于皇后串y之前，当且仅当将x视为整数时比y小。
*/
#include <stdio.h>
typedef int bool; //自定义bool在 C 
#define  true 1
#define false 0 
int str[1000],count=0,num,P[1000];
bool hashTable[10]={false}; //记录整数 i是否已经在P中 
void generateP(int index){
	int i,j;
    if(index==9){ //达到递归边界，生成一个合法方案 
        count++; //能达到这里的一定是合法的 
        str[count]=num;
        return;
    }
    for(i=1;i<=8;i++){ //第 i行 
        if(hashTable[i]==false){ //第 i行还没有皇后 
            bool flag=true; //表示当前皇后不会和之前皇后起冲突 
            for(j=1;j<index;j++){ //遍历之前的皇后 
                if(abs(j-index)==abs(i-P[j])){ //第 j列皇后的行号为 i,第index列皇后的行号为P[j] 
                    flag=false; //与之前的皇后在一条对角线，冲突 
                    break;
                }
            }
            if(flag){ //如果可以把皇后放在第 i行 
                P[index]=i; //令第index列皇后的行号为 i 
                hashTable[i]=true; //第 i列已被占用 
                num=num*10+i;
                generateP(index+1); //递归处理第index+1行皇后 
                hashTable[i]=false; //递归完毕，还原第i行为未占用 
                num=(num-i)/10;
            }
        }
    }
} 
int main(){
	int N,a;
	while(scanf("%d",&N)!=EOF){
		while(N--){
			scanf("%d",&a);
			generateP(1);
			printf("%d\n",str[a]);
		}
	}
	return 0;
} 
 
