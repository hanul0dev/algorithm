#include <iostream>
#include <vector>
#define k 20
using namespace std;
int main(){

int n,i,j,x,y;
vector<vector<int>> a(k,vector<int> (k,0));

scanf("%d",&n);
for(i=1; i<=n; i++){
  scanf("%d %d",&x,&y);
  a[x][y]=1;
}

for(i=1;i<=19;i++){
  for(j=1;j<=19;j++){
    printf("%d ", a[i][j]);
  }
  printf("\n");
}

return 0;
}

