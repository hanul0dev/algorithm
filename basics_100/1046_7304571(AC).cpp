#include <stdio.h>
int main(){

long long a,b,c;


scanf("%lld%lld%lld",&a,&b,&c);

printf("%.0lf\n",(float)a+b+c);
printf("%.1lf",(float)(a+b+c)/3);

return 0;
}

