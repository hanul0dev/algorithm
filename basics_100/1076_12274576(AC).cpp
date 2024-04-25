#include<stdio.h>
int main()
{
    char a, b = 'a';
    scanf("%c", &a);
    do {
        printf("%c ", b);
        b++;
    } while (b <= a);

    return 0;
}

