#include <iostream>
#include <vector>
using namespace std;
int main(){

int a,i,n;
vector<int> v;

cin>>a;

for(i=1;i<=a;i++){
    cin>>n;
    v.push_back(n);
}
for(i=a-1;i>=0;i--){
    cout<<v[i]<<" ";
}


return 0;
}

