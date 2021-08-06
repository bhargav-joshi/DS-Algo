//Write a program to accept an integer from the user, and print all the natural numbers upto that integer
#include<iostream>
using namespace std;
int main ()
{

  int i, N;
  cout << "Enter the number:";
  //user input 
  cin >> N;
  for (i = 1; i <= N; i++)
  {
      cout<<i<<" ";
  }
  return 0;
}
