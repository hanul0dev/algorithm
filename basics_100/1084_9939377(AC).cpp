#include<iostream>
using namespace std;
int main(){

int a, b, c;
int i,j,k;

cin>>a>>b>>c;

for(i=0; i<a; i++){
 for(j=0; j<b; j++){
    for(k=0; k<c; k++){
        cout<<i<<" "<<j<<" "<<k<<" \n";
  }
 }
}
 cout<<a*b*c;

return 0;
}

