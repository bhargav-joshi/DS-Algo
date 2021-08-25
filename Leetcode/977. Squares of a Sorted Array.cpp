class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // Iterating over all numbers and squaring it 
        for (int i=0; i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        // Sorting by Numbers in asending 
        sort(nums.begin(), nums.end());
        return nums;
    }
};
