#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float s;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF)
    {
        s=(a+b)*c/2;
        printf("%.2f\n",s);
    }
    return 0;
}
