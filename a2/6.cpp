#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
using namespace std;

void read_board(char board[], int SQUARES){
  for(int i=0;i<SQUARES;i++)
    cin>>board[i];
}

char evaluate_board(char board[], int SQUARES){
  if(((board[3]==board[4])&&(board[4]==board[5]))||((board[1]==board[4])&&(board[4]==board[7]))||
  ((board[0]==board[4])&&(board[4]==board[8]))||((board[2]==board[6])&&(board[6]==board[4]))){
    if (board[4]=='x')
      return 'x';
    if (board[4]=='o')
      return 'o';
    }
  else if(((board[0]==board[1])&&(board[1]==board[2]))||((board[0]==board[3])&&(board[3]==board[6]))){
    if (board[0]=='x')
      return 'x';
    if (board[0]=='o')
      return 'o';
    }

  else if(((board[2]==board[5])&&(board[5]==board[8]))||((board[6]==board[7])&&(board[7]==board[8]))){
    if (board[8]=='x')
      return 'x';
    if (board[8]=='o')
      return 'o';
    }

  else if(board[0]=='1'||board[1]=='2'||board[2]=='3'||
  board[3]=='4'||board[4]=='5'||board[5]=='6'||
  board[6]=='7'||board[7]=='8'||board[8]=='9')
    return 'u';

  else
    return 'd';

}

//   Write your function definitions here

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  const int SQUARES = 9;

  char board[SQUARES];

  read_board(board, SQUARES);
  char result = evaluate_board(board, SQUARES);

  switch (result)
  {
    case 'x':
    case 'o':
      std::cout << "Player " << result << " wins!!" << std::endl;
      break;
    case 'd':
      std::cout << "No winner. It's a draw!!" << std::endl;
      break;
    case 'u':
      std::cout << "No winner, but game is not over yet. Please continue." << std::endl;
      break;
    default:
      std::cout << "Sorry, I am broken." << std::endl;
  }

  return 0;
}
