/* Longest Substring Without Repeating Characters - Leetcode
* Given a string s, find the length of the longest substring without repeating characters.
* Also Asked in Amazon Interview
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        
        if(s.size() == 0)
            return 0;
        
        int i,j;
        i = 0, j= 0;
        
        vector<int> count(326,0);
        count[s[0]]++;
        
        int ans = 1;
        while (1)
        {
            if (j == n-1)
                break;
            if (count[s[j+1]] == 0)
                j++,count[s[j]]++, ans = max(ans,j-i+1);
            else
            {
                count [s[i++]]--;
            }
        }
        return ans;
    }
};
