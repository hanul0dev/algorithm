#include <iostream>
#include <vector>
#define k 1001
using namespace std;
int main(){

int n,l,d,x,y,i,j,h,w;
vector<vector<int>> a(k,vector<int> (k,0));


cin>>h>>w>>n;
for(i=0;i<n;i++){
    cin>>l>>d>>x>>y;
    a[x][y]=1;

if(d==0)
    for(j=1;j<l;j++){
        a[x][y+j]=1;
    }
else{
    for(j=1;j<l;j++){
        a[x+j][y]=1;
    }
}
}
for(i=1;i<h+1;i++){
for(j=1;j<w+1;j++){
cout<<a[i][j]<<" ";
}
cout<<endl;
}

return 0;
}

