#include<stdio.h>
#include<math.h>
int main()
{
    int a,s;
    while(scanf("%d",&a)!=EOF)
    {
        s=(1+a)*a/2;
        printf("%d\n",s);
    }
    return 0;
}
