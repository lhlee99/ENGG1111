#include <iostream>
using namespace std;
int main() {
  int a,d=1,k,i;
  cin>>a;
  a+=1;
  if (a!=1){
    d+=1;
  }

  for(i=0;i<10;a++){

    while (a%d!=0)
      d+=1;
    if (a/d==1&&a!=1){
      cout<<a<<endl;
      i++;
    }

    d=2;
  }
}
