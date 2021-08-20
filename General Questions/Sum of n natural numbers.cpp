 // Sum of n natural numbers 
    #include<iostream>
    using namespace std;
    int main()
    {
        
       int sum , N; 
        cout <<"Enter the limit:"; 
        //user input 
        cin >> N; 
        //calculating 
        sum= N*(N+1)/2; 
        cout<<"The Sum of first "<< N <<" Natural Numbers is "<< sum; 
        return 0;
    }
