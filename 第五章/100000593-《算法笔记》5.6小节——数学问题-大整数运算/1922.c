/*1922
˼��
	- P1P2...Pi.Q1Q2...Qj�����������֣�P1P2...Pi��һ���Ǹ�����
	- ����С�����֣�Qj������0������0.0 + 0.0 = 0.0
	- �ַ��������ӻ��߼��ٺ�Ҫ��'\0'��Ϊ������־��
*/
#include<stdio.h>
#include<string.h>
struct bign {
	int d[1001], x[1001];		//�ֱ𴢴��������ֺ�С������
	int dlen, xlen;					//�������ֳ��Ⱥ�С������
};
struct bign charge(char str[]) {
	struct bign a = { { 0 }, 0 };
	int i, j, t, len = strlen(str);
	for(i = 0; str[i] != '.'; i++);
	for(t = 0; t < i; t++)	 //�����ӵ�λ��ʼ��
		a.d[t] = str[i - 1 - t] - '0';
	a.dlen = t;
	i++;
	for(j = 0; i < len; i++)	//С���Ӹ�λ��ʼ�棨���㰴λ��ӣ�
		a.x[j++] = str[i] - '0';
	a.xlen = j;
	return a;
}
struct bign add(struct bign a,struct bign b) {
	struct bign c = { { 0 }, 0 };
	int carry1 = 0,i;
	int maxlen = (a.xlen >= b.xlen) ? a.xlen : b.xlen;
	c.xlen = maxlen;
	for(i = maxlen - 1; i >= 0; i--) {	//С�����
		int temp = a.x[i] + b.x[i] + carry1;
		c.x[i] = temp % 10;
		carry1 = temp / 10; 
	}
	while(c.x[c.xlen - 1] == 0)
		c.xlen--;
	int carry2 = carry1;	//С���Ľ�λ��������
	for(i = 0; i < a.dlen || i < b.dlen; i++) {	//�������
		int temp = a.d[i] + b.d[i] + carry2;
		c.d[c.dlen++] = temp % 10;
		carry2 = temp / 10; 
	}
	if(carry2 != 0) {
		c.d[c.dlen++] = carry2;
	}
	return c;
}
void print(struct bign a) {
	int i;
	for(i = a.dlen - 1; i >= 0; i--)	//������ӡ
		printf("%d", a.d[i]);
	if(a.xlen >= 1){
		printf(".");
		for(i = 0; i < a.xlen; i++)		//С����ӡ
			printf("%d", a.x[i]);
	}
	printf("\n");
}
int main() {
	int n;
	char str1[1001], str2[1001];
	scanf("%d",&n);
	while(n > 0) {
		scanf("%s%s", str1, str2);
		struct bign a = charge(str1);
		struct bign b = charge(str2);
		print(add(a, b));
		n--;
	}
	return 0;
}
