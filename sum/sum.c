#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d",&a)!=EOF)
    {
        c=a/1000;
        d=(a-c*1000)/100;
        e=(a-c*1000-d*100)/10;
        f=a-c*1000-d*100-e*10;
        b=c+d+e+f;
        printf("%d\n",b);
    }
    return 0;
}
