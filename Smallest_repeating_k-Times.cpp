#include <iostream>
using namespace std;

class Solution {
  public:
    int findDuplicate(const vector<int>& arr, int k) 
    {
        // code here
        int count = 0;
        
        unordered_map<int,int>um;
        for(int i=0;i<arr.size();i++)
        {
            um[arr[i]]++;
        }
        
        int min = INT_MAX;
        for(auto x : um)
        {
            if(x.second == k)
            {
                if(min > x.first)
                    min = x.first;
            }
        }
        
        if(min != INT_MAX)
            return min;
        else
            return -1;
    }
};