#include<stdio.h>
int cmp (const void *a, const void *b)  //�Ӵ�С����
{
    return *(int *)b - *(int *)a;
}
int main() {
    int i, j, k, m, x;
    while(scanf("%d", &m) != EOF) {
        int sum[20] = {0};
        for(i = 0; i < m; i++) {
            for(j = 0; j < m; j++) {
                scanf("%d", &x);
                sum[i] = sum[i] + x; //����ÿһ�еĺ�
                sum[m+j] = sum[m+j] + x; //����ÿһ�еĺ�
                if(i == j) {
                    sum[2*m] = sum[2*m] + x; //����Խ��ߵĺ�
                }
                if(i == m-j-1) {
                    sum[2*m+1] = sum[2*m+1] + x;
                }
            }
        }
        qsort(sum,2*m+2, sizeof(int), cmp);
        for(i=0;i<2*m+2;i++){
        	printf("%d ",sum[i]);
		}
        printf("\n");
    }
    return 0;
}
