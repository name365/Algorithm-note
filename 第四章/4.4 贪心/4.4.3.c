/*����N��������(x,y)������ѡ�񾡿��ܶ�Ŀ����䣬ʹ����Щ����������û�н��� 
*/ 
#include <stdio.h>
typedef struct{
	int x,y; //���������Ҷ˵� 
}Inteval; 
int cmp(const void *a, const void *b){ 
	Inteval A = *(Inteval*) a;
	Inteval B = *(Inteval*) b; 
	return A.y - B.y; 
}
int main(){
	int n,i;
	Inteval I[110];
	while(scanf("%d",&n),n != 0){
		for(i=0;i<n;i++){
			scanf("%d %d",&I[i].x,&I[i].y);
		}
		qsort(I,n,sizeof(Inteval),cmp); //�������� 
		int ans=0,lasty=0;
		for(i=0;i<n;i++){
			if(lasty<=I[i].x){ //����������Ҷ˵���lastX��� 
				lasty = I[i].y; //��I[i]��Ϊ��ѡ�е����� 
				ans++; //���ཻ���������1 
			}
		}
		printf("%d\n",ans);
	} 
	return 0;
} 
