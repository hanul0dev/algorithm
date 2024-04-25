#include <stdio.h>
int main(){

int a,b,c;

scanf("%d",&a);

if(a<=-1){
    printf("%s\n","minus");
}
else{
    printf("%s\n","plus");
}
if(a%2==0){
    printf("%s","even");
}
else{
    printf("%s","odd");
}
return 0;
}
