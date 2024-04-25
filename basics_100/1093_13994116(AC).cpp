#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n,i,a;
    vector<int> v(1000);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        v[a]=v[a]+1;
    //  v.push_back(a);

    }
for(i=1;i<=23;i++){
    cout<<v[i]<<" ";
}
return 0;
}

