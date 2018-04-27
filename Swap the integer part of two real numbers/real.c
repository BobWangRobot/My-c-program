#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    int c,d;
    float e,f;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        c=(int)a;
        d=(int)b;
        e=a-(a-c)+(b-d);
        f=b-(b-d)+(a-c);
        printf("%.2f %.2f\n",f,e);
    }
    return 0;
}
