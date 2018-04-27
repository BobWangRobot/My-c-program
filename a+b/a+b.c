#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d", &a, &b)!=EOF)
	{
        c = a + b;
        printf("a+b=%d\n", c);
	}

	return 0;
}
