#include <stdio.h>
int main(){

int a,m;

scanf("%d",&a);
reget:
    scanf("%d",&m);
    printf("%d\n",m);
    if(a--!=1) goto reget;

return 0;
}

