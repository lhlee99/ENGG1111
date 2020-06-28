#include <iostream>

const int MAXDIM = 10;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
using namespace std;
void read_matrix(char matrix[MAXDIM][MAXDIM],int &dim){
  cin>>dim;
  for(int i=0;i<dim;i++){
    for(int i2=0;i2<dim;i2++)
      cin>>matrix[i][i2];
  }
}
void display_with_fill(char matrix[MAXDIM][MAXDIM],int dim){
  char sample[10][10]={0};
  for(int row=0;row<dim;row++){
    for(int column=0;column<dim;column++){
      if(matrix[row][column]=='x'){
        for(int i=0;i<dim;i++)
          sample[row][i]='x';
        for(int i=0;i<dim;i++)
          sample[i][column]='x';
      }
    }
  }
  for(int row=0;row<dim;row++){
    for(int column=0;column<dim;column++){
      if(sample[row][column]=='x')
        matrix[row][column]=sample[row][column];
    }
  }
  for(int row=0;row<dim;row++){
    for(int column=0;column<dim;column++){
      cout<<matrix[row][column]<<" ";
    }
    cout<<endl;
  }
}
//   Write your function definitions here

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  char matrix[MAXDIM][MAXDIM]{};
  int dim = 0;

  read_matrix(matrix, dim);
  display_with_fill(matrix, dim);

  return 0;
}
