#include <iostream>
using namespace std;
int main() {
	char A='1',B='2',C='3',D='4',E='5',F='6',G='7',H='8',I='9';
	int i=0,k=0,k2=0,p1,p2;
	cout<<A<<B<<C<<endl<<D<<E<<F<<endl<<G<<H<<I<<endl;
	while (i<2){
		while(k<=0){
			cout<<"x: ";
			cin>>p1;
			k++;

			if (p1==1&&A!='o')
				A='x';

			else if (p1==2&&B!='o')
				B='x';

			else if (p1==3&&C!='o')
				C='x';

			else if (p1==4&&D!='o')
				D='x';

			else if (p1==5&&E!='o')
				E='x';

			else if (p1==6&&F!='o')
				F='x';

			else if (p1==7&&G!='o')
				G='x';

			else if (p1==8&&H!='o')
				H='x';

			else if (p1==9&&I!='o')
				I='x';

			else
				k--;
			cout<<A<<B<<C<<endl<<D<<E<<F<<endl<<G<<H<<I<<endl;
		}

		while(k2<=0){
			cout<<"o: ";
			cin>>p2;
			k2++;
			if (p2==1&&A!='x')
				A='o';

			else if (p2==2&&B!='x')
				B='o';

			else if (p2==3&&C!='x')
				C='o';

			else if (p2==4&&D!='x')
				D='o';

			else if (p2==5&&E!='x')
				E='o';

			else if (p2==6&&F!='x')
				F='o';

			else if (p2==7&&G!='x')
				G='o';

			else if (p2==8&&H!='x')
				H='o';

			else if (p2==9&&I!='x')
				I='o';
			else
				k2=0;
			cout<<A<<B<<C<<endl<<D<<E<<F<<endl<<G<<H<<I<<endl;

		}
		i++;
		k--;
		k2--;
	}


}
