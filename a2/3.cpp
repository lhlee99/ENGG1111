#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
using namespace std;
void read_lists(int a1[], int a2[], int a3[], int SIZE){
  for(int i=0;i<SIZE;i++)
    cin>>a1[i];
  for(int i=0;i<SIZE;i++)
    cin>>a2[i];
  for(int i=0;i<SIZE;i++)
    cin>>a3[i];
}
void display_common_integers(int a1[], int a2[], int a3[], int SIZE){
  int k=0;
  for(int i=0;i<SIZE;i++){

    for(int i2=0;i2<SIZE;i2++)
      if(a1[i]==a2[i2]){
        for(int i3=0;i3<SIZE;i3++){
          if(a1[i]==a3[i3]){
            cout<<a3[i3]<<endl;
            a1[i]=123123;
            a2[i2]=4444321;
            a3[i3]=2314324;
            k++;
//            break;
          }
        }
//       break;
      }
  }
  if (k==0) cout<<"None"<<endl;
}
//   Write your function definitions here

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  const int SIZE = 8;
  int arr1[SIZE]{};
  int arr2[SIZE]{};
  int arr3[SIZE]{};

  read_lists(arr1, arr2, arr3, SIZE);
  display_common_integers(arr1, arr2, arr3, SIZE);

  return 0;
}
