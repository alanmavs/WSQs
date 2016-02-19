#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int numaleat, num1, times;
  times=0;
  srand(time(NULL));
  numaleat=rand() %100+1;
  do {
  cout << "Can you guess a number between 1 and 100, lets see if you can get it correctly" << endl;
  cin >> num1;
  if (num1<numaleat){
  cout << "The number" << num1 << "is to small, try typing in a higher one" << endl;}
  else if (num1>numaleat){
  cout << "the number" << num1 << "is to high, try typing in a higher one" << endl;}
  else{ cout << "You are correct, you guessed the right number" << endl;
  }
  times=times+1;
}while (num1!=numaleat);
  cout << "You tried to guess the number" << times << "times" <<endl;
return 0;
}
