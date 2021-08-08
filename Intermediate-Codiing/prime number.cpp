#include<iostream>
using namespace std;
int main () 
{
  
  //initializing variables
  int c, number, div = 0;
  
  //user input  
  cout<<"Enter number:";
  cin>>number;
  
  //checking for number of divisor
  for (c = 1; c <= number; c++)
  {
      if (number % c == 0)
	  {
	    div++;
       }
   }
  
   //no divisors other than 1 and itself
   if (div == 2)
    {
      //display
	  cout<<number<<" is a prime number ";
    }
  
    else
    {
      //display
      cout<<number<<" is a prime number ";
    }
  
  return 0;

}
