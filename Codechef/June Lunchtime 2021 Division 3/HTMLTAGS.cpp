#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int x;
	std::cin >> x;
	
	while(x--)
	{
	    string s;
	    std::cin >> s;
	    
	    string ans = "Success";
	    
	    if(s.size() <= 3 )
	    {
	        ans = "Error";
	    }
	    else if(s[0] != '<' || s[1] != '/')
	    {
	        ans = "Error";
	    }
	    else if(s[s.size()-1] != '>')
	    {
	        ans = "Error";
	    }
	    else
	    {
	        for(int i=2; i<s.size()-1; i++)
	        {
	            if(!(s[i] >= 'a' && s[i] <= 'z' || s[i]>='0' && s[i]<= '9'))
	            {
	                ans = "Error";
	            }
	        }
	    }
	    std::cout << ans << std::endl;
	}
	
	return 0;
}
