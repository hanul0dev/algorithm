#include <stdio.h>
int main(){

long long a,b;
int c=0;

scanf("%lld%lld",&a,&b);

printf("%lld\n",a+b);
printf("%lld\n",a-b);
printf("%lld\n",a*b);
printf("%lld\n",a/b);
printf("%lld\n",a%b);
printf("%.2lf\n",(float)a/b);

return 0;
}

