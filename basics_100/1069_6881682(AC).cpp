#include <stdio.h>


int main()
{
    char A, B, C, D;
    char x;
    scanf("%c", &x);
    switch(x)
    {
case 'A':
    printf("best!!!\n");
    break;
case 'B':
    printf("good!!\n");
    break;
case 'C':
    printf("run!\n");
    break;
case 'D':
    printf("slowly~\n");
    break;
default:
    printf("what?\n");
}
    return 0;
}
