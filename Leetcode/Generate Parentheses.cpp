class Solution {
public:
    vector<string> generateParenthesis(int n) 
    { 
        vector<string> ans; 
        if(n == 0) return ans; 
        recursive(ans,"",n,n);
        return ans;
    } 
    void recursive(vector<string> &ans,string Now,int open,int close) 
    { 
        if(open == 0 && close == 0) 
        {  
            ans.push_back(Now); 
            return;
        }   
        if(open != 0) 
        { 
            recursive(ans,Now + "(",open - 1,close);
        }  
        if(close > open) 
        { 
            recursive(ans,Now + ")",open,close-1);
        }  
    }
};
