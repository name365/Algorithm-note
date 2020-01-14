#include <stdio.h>
struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};
int main(){
	int n,i,j;
	scanf("%d",&n);
	char a[20];
	for(i=0;i<n;i++){
		scanf("%s",a);
		for(j=0;j<3;j++){
			if(strcmp(leader[j].name,a)==0)
				leader[j].count++;
		}
	}
	printf("Li:%d\n",leader[0].count);
	printf("Zhang:%d\n",leader[1].count);
	printf("Fun:%d\n",leader[2].count);
	return 0;
}
