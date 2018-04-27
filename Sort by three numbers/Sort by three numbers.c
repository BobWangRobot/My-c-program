#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(c>b)
        {
            d=b;
            b=c;
            c=d;
        }
        if(b>a)
        {
            d=a;
            a=b;
            b=d;
        }
        if(c>b)
        {
            d=b;
            b=c;
            c=d;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
