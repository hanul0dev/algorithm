#include <iostream>
#include <vector>
#define k 1001
using namespace std;
int main(){

int n,l,d,i,j,h,w;
vector<vector<int>> a(k,vector<int> (k,0));

for(int i=1; i<=10; i++){
    for(int j=1; j<=10; j++){
      cin>>a[i][j];
    }
  }

  int x=2,y=2;

  while(a[x][y]!=2){
    if(a[x][y+1]==0){
      a[x][y+1]=9;
      y=y+1;
    }
    else if(a[x][y+1]==2){
      a[x][y+1]=9;
      y=y+1;
      break;
    }
    else if(a[x+1][y]==0){
      a[x+1][y]=9;
      x=x+1;
    }
    else if(a[x+1][y]==2){
      a[x+1][y]=9;
      x=x+1;
      break;
    }
    else break;
  }
  a[2][2]=9;

  for(int i=1;i<=10;i++){
    for(int j=1; j<=10;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}

