#include <iostream>

const int SIZE = 8;
//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
using namespace std;

void read_array (int x[]){
  for(int i=0;i<8;i++)
    cin>>x[i];
}
int read_number_of_shifts(){
  int n;
  cin>>n;
  return n;
}
int shift_array(int arr[],int n){
  int sample[SIZE];
  while(n<0){
    n+=SIZE;
  }
  for(int i=0;i<SIZE;i++)
    sample[i] = arr[i];
  for(int i=0;i<SIZE;i++)
    arr[(i+n)%SIZE] = sample[i];
}
//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------
int main()
{
  int arr[SIZE];

  read_array(arr);
  int shifts = read_number_of_shifts();
  shift_array(arr, shifts);

  for (int i = 0; i < SIZE; ++i)
  {
    std::cout << arr[i] << ' ';
  }
  std::cout<<std::endl;

  return 0;
}
