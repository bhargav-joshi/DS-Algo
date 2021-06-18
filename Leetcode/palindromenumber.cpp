class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false; 
        int xz = x; 
        long temp = 0; 
        while(xz)
        {
            temp = 10*temp + xz%10;
            xz /= 10;
        }
        return ! (temp - x);
    }
};
