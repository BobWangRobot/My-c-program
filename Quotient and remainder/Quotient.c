#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        c=a/b;
        d=a%b;
        printf("%d\n",c);
        printf("%d\n",d);
    }
    return 0;
}
