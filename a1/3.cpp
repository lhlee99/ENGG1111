#include <iostream>
using namespace std;
int main() {
	int a,A=1,b,B=1,c,C=1,i;

	cin>>a>>b>>c;

	i=0;
	while(a>i&&a!=0){
		i++;
		A=A*i;
	}

	i=0;
	while(b>i&&b!=0){
		i++;
		B=B*i;
	}

	i=0;
	while(c>i&&c!=0){
		i++;
		C=C*i;
	}
cout<<A+B+C<<endl;

}
