/*
* 1. Two Sum
* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
* You may assume that each input would have exactly one solution, and you may not use the same element twice.
* You can return the answer in any order.
*/


#include<bits/stdc++.h>

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> id;
        for(int i=0; i<nums.size(); i++)
        {
            int make = target - nums[i];
        
            if (id[make])
            {
                return {id[make]-1, i};
            }
            id[nums[i]] = i+1;
        }
        return {-1, -1};
    }
};
