// Write a program to accept n numbers from user in an array and print all of them.  

#include <iostream>
using namespace std;
int main ()
{
  //Initialize array
  int n,i;
  
  cout<<"Enter the length of the array\n";
  cin>>n;
  int arr[n];
  cout<<"Enter the Elements of the array\n";

  for( i = 0;i<n;i++)
  {
      cin>>arr[i];
  }
  cout<<"Elements of given array: \n";
  //Loop through the array by incrementing value of i   
  for (i = 0; i < n; i++)
    {
      cout<<arr[i];
    }

  return 0;
}
