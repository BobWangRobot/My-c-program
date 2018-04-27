#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        c=-b/a;
        printf("%.2f\n",c);
    }
    return 0;
}
