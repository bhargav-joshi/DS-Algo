class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        long limit = (1L<<31);
        
        while(x)
        {
            int  d = x%10;
            x /= 10;
            rev = 10*rev +d;
        }
        if (rev >= limit or rev <- limit)
            return 0;
        return rev;
    }
};
