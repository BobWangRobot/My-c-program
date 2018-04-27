#include<stdio.h>
#include<math.h>
int main()
{
    char a[4];
    int i=0;
    while(scanf("%s",a)!=EOF)
    {
        for(i=3;i>=0;i--)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
