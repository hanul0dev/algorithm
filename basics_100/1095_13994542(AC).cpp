#include <iostream>
#include <vector>
#define z 10001
using namespace std;
int main(){

int n,low=23,k,i,j;
vector<int> v(z);
cin>>n;
for(i=0;i<n;i++){
    cin>>v[i];
}
for(j=0;j<n;j++){
  for(i=0;i<n;i++){
  if(v[j]>v[i]&&low>v[i]){
  low=v[i];
  continue;
 }
  else if(v[i]>v[j]&&low>v[j]){
   low=v[j];
    continue;
 }
  }
   }
   cout<<low;


 return 0;
}

