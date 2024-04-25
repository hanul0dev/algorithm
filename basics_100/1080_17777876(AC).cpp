#include <stdio.h>
int main(){

int a,i=0,sum=0;

scanf("%d",&a);

while(1){
    i++;
    sum+=i;
    if(sum>=a){
        printf("%d",i);
        break;
    }

}

return 0;
}

