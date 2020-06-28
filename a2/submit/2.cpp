#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
using namespace std;
void read_word(char word[],int &word_length){
  cin>>word_length;
  for(int i=0;i<word_length;i++)
    cin>>word[i];
}
char read_target(){
  char c;
  cin>>c;
  return c;
}
/*void deleteTarget(char word[], int &word_length, char target){
  for(int i=0;i<word_length;i++){
    if (word[i]==target){
      word[i]=0;
      //word_length-=1;
    }
  }
}*/
void delete_target(char word[], int &word_length, char target){
  int k = 0 ;
  for(int i=0;i<word_length;i++){
    if(word[i]==target){
      for(int i2=i;i2<word_length;i2++)
        word[i2]=word[i2+1];
      i--;
      word_length-=1;
    }
  }
}

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  const int MAXLENGTH = 10;

  char word[MAXLENGTH]{};
  int word_length = 0;
  read_word(word, word_length);

  char target = read_target();
  delete_target(word, word_length, target);

  for (int i = 0; i < word_length; ++i)
  {
    std::cout << word[i];
  }
  std::cout << std::endl;

  return 0;
}
