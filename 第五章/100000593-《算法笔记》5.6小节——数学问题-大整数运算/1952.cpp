/*1952
˼��
	- ����һ��ʮ������A����Aת��Ϊ����������Ȼ��λ�������У���ת��Ϊʮ������B�����B
	- ��֮ǰ�Ľ���ת�����ƣ�ֻ������һ���������� 
	
*/
#include<stdio.h>
#include<string.h>
struct bign {
    int d[1001];
    int len;
    bign() {
        memset(d, 0, sizeof(d));
        len = 0;
    }
};
bign change(char a[]){//����洢
    bign c;
    int i;
    for(i = strlen(a)-1; i >= 0; i--)
    c.d[c.len++] = a[i]-'0';
    return c;
}
bign reverse(bign a) {
    bign c;
    int i;
    for(i = a.len-1; i >= 0; i--)
    c.d[c.len++] = a.d[i];
    return c;
}
int main() {
    char a[1001];
    while(scanf("%s", a) != EOF) {
        bign b = change(a);
        bign temp; //�����������
        while(b.len > 0){//ת��Ϊ������
            int carry = 0,i,j;
            for(i = b.len-1; i >= 0; i--) {
                int t = b.d[i] + carry * 10;
                carry = t%2;
                b.d[i] = t/2;
            }
            temp.d[temp.len++] = carry;
            while(b.d[b.len-1] == 0)
                b.len--;
        }
        bign c = reverse(temp), ans;
        while(c.len > 0) {
            int i,carry = 0;
            for(i = c.len-1; i >= 0; i--) {
                int t = c.d[i] + carry * 2;
                carry = t % 10;
                c.d[i] = t / 10;
            }
            ans.d[ans.len++] = carry;
            while(c.d[c.len-1] == 0)
                c.len--;
        }
        for(int i = ans.len-1; i >= 0; i--)
            printf("%d", ans.d[i]);
        printf("\n");
    }
    return 0;
}
