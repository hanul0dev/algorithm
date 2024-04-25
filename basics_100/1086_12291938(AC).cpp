#include <stdio.h>
int main (){
    long long int w,h,b;
    double m;
 
    scanf("%lld%lld%lld",&w,&h,&b);
    m=(w*h*b);
    printf("%.02lf MB",m/(8*1024*1024));
    
    return 0;
}

