#include <iostream>
using namespace std;
int main() {
int a,b,d1,d2,i;

cout<<"a: ";
cin>>a;
cout<<"b: ";
cin>>b;
cout<<"Divisor 1: ";
cin>>d1;
cout<<"Divisor 2: ";
cin>>d2;

cout<<"M "<<d1<<" "<<d2<<endl;

for(i=a;i<b;i++){
cout<<i<<" "<<(i%d1==0)<<" "<<(i%d2==0)<<endl;

}

}
