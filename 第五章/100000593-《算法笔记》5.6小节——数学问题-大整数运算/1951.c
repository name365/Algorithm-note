/*1951
˼��
	- ������N������С�������������������Ľ����ÿ����ռһ�С�
	- �Զ����������������Ƚϴ�С�����¹��� 
	- ���ȴ��ߴ󡣳���С��С��ͬ���Ƚ���ͬλ��С��
*/
#include<stdio.h>
#include<string.h>
struct bign{
    int d[1001];
    int len;
}ans[110];
struct bign change(char a[]){	//����洢 
    struct bign c={{0},};
    int i;
    for(i=0; i<strlen(a); i++)
        c.d[c.len++] = a[i]-'0';
    return c;
}
int cmp(struct bign a,struct bign b){	//�Ƚ�a��b��С��a����ȡ�aС�ֱ𷵻�1��0��-1 
	int i;
	if(a.len >b.len)	return 1;	//a�� 
	else if(a.len <b.len)	return -1;	//aС
	else{
		for(i=0;i<=a.len;i++){	//�Ӹ�λ����λ�Ƚ� 
			if(a.d[i] >b.d[i])	return 1;	//ֻҪ��һλa����a��
			else if(a.d[i]<b.d[i])	return -1;	//ֻҪ��һλaС����aС 
		}
		return 0;	//������� 
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
        }//����ð������
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
