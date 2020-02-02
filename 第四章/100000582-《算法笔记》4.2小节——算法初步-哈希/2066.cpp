#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int n,m,s[110],g[110],t[110],i,j,k;
	while(~scanf("%d",&n)){ 	
		for(i=0;i<n;i++){
			int z[110][2100]={0};
			scanf("%d",&m);
			for(j=0;j<m;j++)
				scanf("%d",&s[j]);
			for(j=0;j<m;j++){
				scanf("%d",&g[j]);
				z[g[j]][s[j]]++;
			}
			sort(s,s+m);
			sort(g,g+m);
			for(j=0;j<m;j++){
				if(j==0||(j>0&&g[j]!=g[j-1])){
					printf("%d={",g[j]);
					for(k=0;k<m;k++){
						if(k==0||(k>0&&s[k]!=s[k-1])){
							printf("%d=%d",s[k],z[g[j]][s[k]]);
							if(k!=m-1&&s[k]!=s[m-1])
								printf(",");
						}
					}
					printf("}\n");
				}
			}
		}
	}
	return 0;
} 
