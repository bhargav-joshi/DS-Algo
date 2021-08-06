//  Print First N Whole Numbers
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
