#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    float ab,sum;
    while(scanf("%f%f%f%f",&a,&b,&c,&d)!=EOF)
    {
        ab=1/((1/a)+(1/b));
        sum=1/(1/ab+1/c+1/d);
        printf("%.2f\n%.2f\n",ab,sum);
    }
    return 0;
}
