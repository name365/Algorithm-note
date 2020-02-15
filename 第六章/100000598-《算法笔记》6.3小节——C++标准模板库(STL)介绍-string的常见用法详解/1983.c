/*1983
思考
	- 读入两个字符串，字符串除了数字还可能包括 '—'、'E'、'e'、'．'，相加之后输出结果，
	- 如果是浮点型，要求用科学计数法表示（最多包含10个有效数字）。 
	- 这道题的描述不是很清楚，负号“-”是在哪里没有说明，可分为两种情况： 
	- 1、负号可能出现在首端，表示这是一个负数；2、也可能出现在“e”的后面，表示10的负几次方。
	- 根据出现“.”、“e”之类的情况将字符串转换为数值型表示(不含科学计数法，就是把2.5e3转换成2500)；
	- 然后两个数相加；将相加后的数输出。
*/
#include<stdio.h>
int main(){
    char str1[50],str2[50];
    long long s,s1,s2,ans;
    int i,a1,a2,a,b,c,w,flag;
    while(scanf("%s %s",str1,str2)!=EOF){
        s1=s2=flag=b=c=a1=0;	//输入str1将其转化为数字 
        for(i=0;str1[i];i++){
            if(str1[i]=='-')	//负号检测 
                flag=1;
            else if(str1[i]=='.')	//浮点小数点检测 
                c=1;
            else if(str1[i]=='e'||str1[i]=='E'){	//指数符号检测 
                sscanf(str1+i+1,"%d",&b);	//将指数开始的位置提取 
                a1+=b;	//指数阶数赋值给a1
                break;
            }else{	//否则，按照正常的字符串元素处理，将字符转换为数字  
                s1=s1*10+str1[i]-'0';	
                a1-=c;	//如果有小数点，则s1增大一次则a1减小1 
            }
        }
        if(flag) s1=-s1;	//如果有负号，则转化为绝对值的相反数 
        flag=b=c=a2=0;	//同理输入str2将其转化为数字 
        for(i=0;str2[i];i++){
            if(str2[i]=='-')
                flag=1;
            else if(str2[i]=='.')
                c=1;
            else if(str2[i]=='e'||str2[i]=='E'){
                sscanf(str2+i+1,"%d",&b);
                a2+=b;
                break;
            }else{
                s2=s2*10+str2[i]-'0';
                a2-=c;
            }
        }
        if(flag) s2=-s2;
        if(a1<a2)	//对阶
            for(;a1<a2;a2--)
                s2*=10;
        else if(a1>a2)
            for(;a1>a2;a1--)
                s1*=10;
        a=a1;s=s1+s2;	//求和 
        if(!s){	//两数之和为0 
            printf("0\n");
            continue;
        }
        while(a<0&&s%10==0){
            s/=10;
            a++;	//找到a的小数点位置 
        }
        if(a>=0){
            printf("%lld",s);
            for(i=0;i<a;i++)
                printf("0");
            printf("\n");
            continue;
        }
        flag=0;
        if(s<0){	//判断和数的符号
            s=-s;
            flag=1;
        }
        ans=1;w=0;
        while(ans<=s){	//求和数的 
            ans*=10;
            w++;
        }
        if(ans>1){
            ans/=10;
			w--;
        }
        if(flag)	//输出和数 
            printf("-");
        printf("%lld",s/ans);	//整数部分 
        if(ans>1)
            printf(".%lld",s%ans);
        printf("e%d\n",a+w);
    }
    return 0;
}
 
