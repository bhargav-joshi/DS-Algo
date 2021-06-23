#include <bits/stdc++.h>
using namespace std;

int main() {
	int  t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::cin >> n;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        std::cin >> a[i];
	    }
	    int x=0, count=0;
	    std::vector<int> v;
	        for(int i =0;i<n;i++){
	            count++;
	            if (a[i]<8){
	                v.push_back(a[i]);
	            if(v.size()==7){
	                break;
	            }
	           }
	        }
	        std::cout << count << std::endl;
	}
	return 0;
}
 
