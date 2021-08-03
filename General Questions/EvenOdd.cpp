/* Number is Even or Odd

We can determine whether a number is even or odd. This can be tested using different methods. The test can be done using simple methods such as testing the number’s divisibility by 2. If the remainder is zero, the number is even. If the remainder is not zero, then the number is odd. The following algorithm describes how a C program can test if a number is even or odd.

Example :

Number is 24
It is an even number because it is exactly divisible by 2

Number is 15
It is odd number because it is not divisible by */


#include<iostream>
using namespace std;
int main ()
{
cout << "Enter a number: ";
  int check;
  cin >> check;
  //checking whether the number is even or odd
  if (check % 2 == 0)
    {
      cout << check << " is an even number";
    }
  else
    {
      cout << check << " is an odd number";
    }
  return 0;
}
