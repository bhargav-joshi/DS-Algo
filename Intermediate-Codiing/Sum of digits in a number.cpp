//C++ Program
//Sum of digits in a number
#include<iostream>
using namespace std;

int main () 
{
  int num, sum = 0;
  
  cout <<"Enter any num: => ";
  cin >> num;
  
  //loop to find sum of digits
  do
    {
      sum += num % 10;
      num = num / 10;
    }while (num != 0);
  
  //output
  cout <<"\n Sum of digits in given integer is: => "<<sum<<"\n";
  
  return 0;

}
