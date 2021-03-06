#include<stdio.h>  
  
#define M sizeof(unsigned int)*8  
  
unsigned long n;  
  
int trans1(char a[],int d1)   /*将d1进制的num,转换为十进制数s*/  
{  
  
    int i=0,num,s=0,P=1;  
  
    while(P)  
    {  
        if(a[i]>='A'&&a[i]<='F')   num=a[i]-'0'-7;  
        else if (a[i]>='a'&&a[i]<='f') num=a[i]-'0'-39;  
        else if (a[i]>='0'&&a[i]<='9') num=a[i]-'0';  
        else{  
               printf("Error!\n");  
               break;  
            }  
        if(num<d1)  
        {  
            if(i==0) s=num;  
            else  
            {  
                s*=d1;  
                s+=num*d1;  
             }  
         }  
        else  
        {  
            printf("Error!\n");       /*不合规则(d1进制)的num*/  
            break;  
         }  
  
        if( a[++i]=='\0') P=0;  
  
      }  
      return s;  
}  
  
  
int trans2(unsigned long n, int d, char s[]) /* 将无符号整数n翻译成d（2<＝d<＝16）进制表示的字符串s */  
{  
    static char digits[] ="0123456789ABCDEF";  /* 十六进制数字的字符 */  
    char buf[M+1];  
    int j, i = M;  
    s[0]='\0';  
    if(d<2||d>16)  
    {  
        s[0]='\0';  /* 不合理的进制，置s为空字符串 */  
        return 0;   /* 不合理的进制，函数返回0 */  
    }  
    buf[i]='\0';  
    do  
    {  
        buf[--i]=digits[n%d]; /*译出最低位，对应字符存入对应工作数组中*/  
        n/=d;  
    }while(n);  
  
    for(j=0;(s[j]=buf[i])!='\0';j++,i++); /*将译出在工作数组中的字符串复制到s */  
  
    return j;  
}  
  
  
main()  
{  
    char str[33];  
    int d1,d2;  
    while(scanf("%s %d %d",&str,&d1,&d2)!=EOF)  
    {  
        n=trans1(str,d1);  
        if(n&&trans2(n,d2,str)) printf("%s\n",str);  
        str[0]='\0';  
     }  
}  



