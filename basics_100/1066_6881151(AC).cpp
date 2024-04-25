#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0)
    {
        printf("even\n");
    }
    if (a % 2 == 1)
    {
        printf("odd\n");
    }

    if (b % 2 == 0)
    {
        printf("even\n");
    }
    if (b % 2 == 1)
    {
        printf("odd\n");
    }
    if (c % 2 == 0)
    {
        printf("even\n");
    }
    
    if (c % 2 == 1)
    {
        printf("odd\n");
    }
    return 0;
}
