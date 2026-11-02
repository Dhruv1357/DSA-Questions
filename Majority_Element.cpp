#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 1;
        unordered_map<int,int>um;

        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
            if(um[nums[i]] > nums.size()/2)
                return nums[i];
        }
        
        return -1;
    }
};