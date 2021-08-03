// Write a program to find  number is  Positive or Negative .
// The following concept will test weather a number is positive or negative. It is done by checking where the number lies on the number line. The following algorithm will help to check this condition.

// If the input number is greater than zero then it is a positive number.
// If the input number is less than zero it is a negative number.
// If the number is zero then it is neither positive nor negative.

#include<iostream>
using namespace std;
int main ()
{
  int no;
  cout << "Enter a number:";
  cin >> no;
  if (no == 0)
    {
      cout << "0 is neither positive nor negative";
    }
  else if (no > 0)
    {
      cout << no << " is a positive number";
    }
  else
    {
      cout << no << " is a negative number";
    }
  return 0;
}
