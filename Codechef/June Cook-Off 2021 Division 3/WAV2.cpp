#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	std::cin >> n >> q;
	
	vector<int> a(n);
	
	for ( int i=0; i<n; i++){
	    std::cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	string ans;
	
	int num;
	while(q--){
	    cin >>num;
	    
	    int pos = lower_bound(a.begin(), a.end(), num) - a.begin();
	    
	    if(a[pos] == num){
	        ans = "0";
	    }
	    else if(pos%2 ==0){
	        ans = "POSITIVE";
	    }
	    else{
	        ans = "NEGATIVE";
	    }
	    std::cout << ans << std::endl;
	}
	
	return 0;
}




