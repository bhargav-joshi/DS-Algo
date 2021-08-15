#include <bits/stdc++.h>
using namespace std;

// s => start & e => end 
void revarray(int arr[], int s,int e)
{
int temp;
if (s >= e)
  return;
  // swapping 
  temp = arr[s];
  arr[s] = arr[e];
  arr[e] = temp;
  revarray(arr, s + 1, e - 1);
}
void printArr(int arr[], int size)
{
  for(int i = 0; i< size; i++)
  cout << arr[i]<<" ";
  cout << endl;
}
int main(){
  int arr[] = {1,2,3,4,5,6};
  revarray(arr, 0, 5);
    cout << "Reversed array is" << endl;
    printArr(arr, 6);
    return 0;
}
