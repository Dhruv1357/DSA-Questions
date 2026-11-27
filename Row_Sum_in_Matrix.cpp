#include <iostream>
using namespace std;

class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) 
    {
        int sum;
        vector<int>ans;
        
        for(int i=0;i<mat.size();i++)
        {
            sum = 0;
            for(int j=0;j<mat[0].size();j++)
            {
                sum+=mat[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};