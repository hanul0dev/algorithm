﻿
#include<stdio.h>
int main(){
    
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    
    for(int j=1;j<c;j++){
        a*=b;
    }
    printf("%lld",a);
    
    return 0;
}

