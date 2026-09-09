#include <iostream>
using namespace std;
class Solution 
{
  public:
    vector<int> dupLastIndex(vector<int>& arr) 
    {

        unordered_map<int,int>um;
        vector<int>v;
        
        for(int i=arr.size() - 1;i>0;i--)
        {
            if(arr[i] == arr[i-1])
            {
                v.push_back(i);
                v.push_back(arr[i]);
                break;
            }
        }
        
        if(v.size() == 0)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};