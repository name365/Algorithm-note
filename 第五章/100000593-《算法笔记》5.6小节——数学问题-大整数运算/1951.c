/*1951
思考
	- 给出的N个数从小到大进行排序，输出排序后的结果，每个数占一行。
	- 自定义排序函数，大数比较大小按如下规则： 
	- 长度大者大。长度小者小。同长比较相同位大小。
*/
#include<stdio.h>
#include<string.h>
struct bign{
    int d[1001];
    int len;
}ans[110];
struct bign change(char a[]){	//正向存储 
    struct bign c={{0},};
    int i;
    for(i=0; i<strlen(a); i++)
        c.d[c.len++] = a[i]-'0';
    return c;
}
int cmp(struct bign a,struct bign b){	//比较a和b大小，a大、相等、a小分别返回1、0、-1 
	int i;
	if(a.len >b.len)	return 1;	//a大 
	else if(a.len <b.len)	return -1;	//a小
	else{
		for(i=0;i<=a.len;i++){	//从高位往低位比较 
			if(a.d[i] >b.d[i])	return 1;	//只要有一位a大，则a大
			else if(a.d[i]<b.d[i])	return -1;	//只要有一位a小，则a小 
		}
		return 0;	//两数相等 
	} 
}
int main(){
    int n,i,j;
    while(scanf("%d",&n)!=EOF){
        char a[1001];
        int k=0;
        for(i=0; i<n; i++){
            scanf("%s",a);
            ans[k++] = change(a);
        }//采用冒泡排序
        for(i=0; i<n; i++)
            for(j=0; j<n-i-1; j++){
                if(cmp(ans[j], ans[j+1])==1){
                    struct bign temp= ans[j];
                    ans[j] = ans[j+1];
                    ans[j+1] = temp;
                }
            }
        for(i=0; i<n; i++){
            for(j=0; j<ans[i].len; j++)
                printf("%d",ans[i].d[j]);
            printf("\n");
        }
    }
    return 0;
}
