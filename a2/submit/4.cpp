#include <iostream>

const int MAXDIM = 10;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
using namespace std;
void read_matrix(int matrix[MAXDIM][MAXDIM],int &dim){
  cin>>dim;
  for(int i=0;i<dim;i++)
    for(int i2=0;i2<dim;i2++)
      cin>>matrix[i][i2];
}
void display_inner_cw_rotated(int matrix[MAXDIM][MAXDIM], int dim){
  for(int column=1;column<dim-1;column++){
    for(int row=dim-2;row>0;row--)
      cout<<matrix[row][column]<<" ";
  cout<<endl;
  }
}
//   Write your function definitions here

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  int matrix[MAXDIM][MAXDIM]{};
  int dim = 0;

  read_matrix(matrix, dim);
  display_inner_cw_rotated(matrix, dim);
  return 0;
}
