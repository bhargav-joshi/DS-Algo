class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int  j=0;
        int len = nums.size();
        for (int i=0;i<len;i++)
        {
            if (j == 0 || nums[i] != nums [j-1])
            {
                nums [j++] = nums [i];
            }
        }
        return j;
    }
};
