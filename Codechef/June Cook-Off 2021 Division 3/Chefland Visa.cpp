#include <iostream>
using namespace std;

int main() {
	int n;
	std::cin >> n;
	
	while(n--){
	    int x1,x2,y1,y2,z1,z2;
	    std::cin >> x1>>x2>>y1>>y2>>z1>>z2;
	    
	    if((x2>=x1) && (y2 >=y1) && (z2<=z1))
	        std::cout << "YES\n" << std::endl;
	    else
	        std::cout << "NO\n" << std::endl;
	}
	return 0;
}
