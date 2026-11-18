#include <iostream>
using namespace std;
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) 
    {

        int temp;
        
        for(int i =1;i<mat.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        return mat;
    }
};