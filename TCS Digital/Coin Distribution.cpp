// Coin Distribution Problem in c++
#include <bits/stdc++.h>
using namespace std; 
int main()
{
int five,two,one,total=0,number;
cout<<"Enter the Number"<<endl;
cin>>number;
five = (number-4)/5;
if((number - 5*five)%2==0)
  one = 2;
else
  one = 1;
two = (number - 5 * five - 1) /2; 
total = one+two+five;
cout<<total;
cout<<" "<<five<<" "<<two<<" "<<one;
return 0;
}

/*
==Output==
Enter the Number
13
6 1 3 2
*/
