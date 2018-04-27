#include<stdio.h>
#include<math.h>
int main()
{
    char a[6],b[6];
    int i=0;
    while(scanf("%s %s",a,b)!=EOF)
    {
        for(i=0;i<3;i++)
        {
            printf("%c",b[i]);
        }
        for(i=3;i>=3&&i<=5;i++)
        {
            printf("%c",a[i]);
        }
        for(i=0;i<3;i++)
        {
            printf("%c",a[i]);
        }
        for(i=3;i>=3&&i<=5;i++)
        {
            printf("%c",b[i]);
        }
        printf("\n");
    }
    return 0;
}
