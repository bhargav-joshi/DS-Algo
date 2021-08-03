/* Write a program to accept a number from the user and round it using the floor() and ceil() methods
floor() - rounds off a number to its nearest smallest integer
ceil() - rounds off a number to its nearest largest integer */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float f;
  float c;
  cout << "Enter Floor - ";
  cin >> f;
  cout << "Enter Ceil - ";
  cin >> c; 
	cout << "Floor is : " << floor(f) << endl;
	cout << "Ceil is : " << ceil(c) << endl;

	return 0;
}
