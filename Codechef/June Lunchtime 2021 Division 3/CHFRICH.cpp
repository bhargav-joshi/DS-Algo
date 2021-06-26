#include <iostream>
using namespace std;

int main() {
	
	int x;
	std::cin >> x;
	
	while(x--)
	{
	    int a,b,c;
	    std::cin >> a>>b>>c;
	    int ans;
	    if((b-a) % c == 0)
	    {
	        ans =(b-a)/c;
	    }
	    else
	    {
	        ans =(b-a)/c + 1;
	    }
	    std::cout << ans << std::endl;
	}
	return 0;
}
