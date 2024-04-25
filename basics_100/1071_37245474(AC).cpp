#include <iostream>
using namespace std;

int main(){

int a[100];
int c=0,i;
while(1){
    cin>>a[c];

    if(a[c]==0){
        break;
    }
    c++;
}
for(i=0;i<c;i++){
    cout<<a[i]<<endl;
}

return 0;
}
