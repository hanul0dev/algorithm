﻿#include <iostream>
#include <vector>
#define k 20
using namespace std;
int main(){

int n,i,j,x,y;
vector<vector<int>> a(k,vector<int> (k,0));

for(i=1;i<=19;i++)
  for(j=1;j<=19;j++)
   cin>>a[i][j];

cin>>n;

for(i=1;i<=n;i++){
    cin>>x>>y;

for(j=1;j<=19;j++){
 if(a[x][j]==0) a[x][j]=1;
   else a[x][j] = 0;
}

 for(j=1;j<=19;j++){
  if(a[j][y]==0) a[j][y]=1;
    else a[j][y] = 0;
  }
}

for(i=1;i<=19;i++){
  for(j=1;j<=19;j++){
     cout<<a[i][j]<<" ";
  }
cout<<endl;
}

return 0;
}

