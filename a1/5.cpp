#include <iostream>
using namespace std;
int main() {
  int m,n,i;
  cin>>m>>n;

  for(i=0;i<m||i<n;i++){
    if(i<m)
    cout<<"y";

    if (i<n)
    cout<<"z";
  }
  cout<<endl;
}
