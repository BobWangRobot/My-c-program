#include<stdio.h>
#include<math.h>
int main()
{
    float q;
    float a,b,c;
    float s;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF)
    {
        q=(a+b+c)/2;
        s=sqrt(q*(q-a)*(q-b)*(q-c));
        printf("%.2f\n",s);
    }
    return 0;
}
