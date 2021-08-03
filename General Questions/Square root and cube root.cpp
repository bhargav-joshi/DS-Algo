// Write a program to accept a number from a user and print its Square root and cube root

#include<iostream>
#include<math.h>
using namespace std;
double SquareRoot(int x)
{
	double sq;
	sq=sqrt(x);
	return sq;
}
double CubeRoot(int x)
{
	double cb;
	cb=cbrt(x);
	return cb;
}

int main()
{
  int num;
	cout<<"Enter Number - ";
  cin>>num;
  cout<<SquareRoot(num)<<"\n";
	cout<<CubeRoot(num)<<"\n";
	return 0;
}
