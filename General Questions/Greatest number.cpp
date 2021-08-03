/*
Write a program to accept 3 integers from the user, and print the greatest number among those integer The program will ask the user to insert three integer variables. And on the basis of the inserted number, the program will evaluate and compare the greatest number as an output. This program uses three integer variables that are represented first, second and third respectively in the program. For Example:
Enter first number:45
Enter second number:56
Enter third number:41 Second is Greater than First and Third
*/

#include<iostream>
using namespace std;
int main ()
{
  int first, second, third;
cout << "Enter first number:";
  cin >> first;
cout << "Enter second number:";
  cin >> second;
cout << "Enter third number:";
  cin >> third;
  //comparing first with other numbers
  if ((first >= second) && (first >= third))
    {
      cout << first << " is the greatest ";
    }
  //comparing Second with other numbers
  else if ((second >= first) && (second >= third))
    {
      cout << second << " is the greatest";
    }
  else
    {
      cout << third << " is the greatest";
    }
  return 0;
}
