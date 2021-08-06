// Sum of n natural numbers 
#include<iostream>
using namespace std;
int main()
{
    int sum , limit; 
    cout << "Enter the limit: "; 
    //user input 
    cin >> limit; 
    //calculating 
    sum = limit*(limit+1)/2; 
    cout<<"The Sum of first "<< limit <<" Natural Numbers is "<< sum; 
    return 0;
}
