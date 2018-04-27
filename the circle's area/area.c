#include<stdio.h>
#include<math.h>
int main()
{
    float a=3.14159;
    float b,c,d;
    while(scanf("%f",&b)!=EOF)
    {
        c=2*a*b;
        d=a*b*b;
        printf("%.2f\n",c);
        printf("%.2f\n",d);
    }
    return 0;
}
