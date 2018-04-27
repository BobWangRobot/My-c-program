#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,l,s;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        l=(a+b)*2;
        s=a*b;
        printf("%d %d\n",l,s);
    }
    return 0;
}
