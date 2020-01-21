/*1785
思考
	- 利用strlen()函数进行字符串获取输入的字符长度，遍历读入存储到新字符数组 
*/
#include <stdio.h>
int main(){
   char m[105],n[105],sum[210];
   while(scanf("%s %s",m,n)!=EOF){
      int n1=strlen(m);
      int n2=strlen(n),i;
      for(i=0;i<n1+n2;i++){
         if(i<n1) sum[i]=m[i];
         if(i>=n1) sum[i]=n[i-n1];
      }
      sum[n1+n2]='\0';
      printf("%s\n",sum);
   }
   return 0;
}
