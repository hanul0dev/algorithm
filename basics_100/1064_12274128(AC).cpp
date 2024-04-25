#include <stdio.h>
int main(){

int a,b,k;

scanf("%d%d%d",&a,&b,&k);
printf("%d",(a<b?a:b)<(k<b?k:b)?(a<b?a:b):(k<b?k:b));

return 0;
}


