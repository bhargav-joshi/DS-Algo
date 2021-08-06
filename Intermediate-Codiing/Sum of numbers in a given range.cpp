// Sum of numbers in a given range
#include<iostream>
using namespace std;
int main()
{
    int N,a,b; 
    //user input for given range
    cin >> a>>b;
    int sum=0;
    for (int i = a; i <= b; i++)
      sum = sum + i;
    cout<<"The Sum of Numbers in given range "<< sum; 
    return 0;
}
