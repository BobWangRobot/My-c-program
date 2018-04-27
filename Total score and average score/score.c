#include<stdio.h>
#include<math.h>
int main()
{
    float q;
    float a,b,c,d;
    float s;
    while(scanf("%f%f%f%f",&a,&b,&c,&d)!=EOF)
    {
        q=a+b+c+d;
        s=q/4;
        printf("%.1f\n",q);
        printf("%.2f\n",s);
    }
    return 0;
}
