// Write a program to accept a number from a user and print the table of the number.

#include<iostream>
#include<math.h>
using namespace std;
void table(int x)
  {
      int i;
      for(i=1;i<=10;i++)
      {
          cout<<x<<" * "<<i<<" = "<<x*i<<"\n";
      }
  }


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
	table(n);
	return 0;
}
