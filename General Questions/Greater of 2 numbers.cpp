/* Write a program to find the greatest of two numbers
The greatest of two numbers can be identified with the help of IF-ELSE statement. The user is asked to insert two integers. The numbers inserted are then calculated using a set of program to get the correct output. It will find the highest number among them using IF-ELSE Statement and start checking which one is larger to display the largest number.

Example – If the given numbers are 12 and 9 then greater number is 12 12, 9= 12>9
*/

#include<iostream>
using namespace std;
int main ()
{
  int first, second;
  cout << "Enter first number: ";
  cin >> first;
  cout << "Enter second number:";
  cin >> second;
  if (first == second)
    {
      cout << "both are equal";
    }
  else if (first > second)
    {
      cout << first << " is greater than" << second;
    }
  else
    {
      cout << second << " is greater than" << first;
    }
  return 0;
}
