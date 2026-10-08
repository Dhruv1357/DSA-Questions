#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) 
    {
        int n = mat.size();
        int f = 0,s = 0;
        int i,j;
        
        vector<int>v;
        
        do
        {
            i = f,j = s;
            do
            {
                v.push_back(mat[i][j]);
                i++,j--;
            }
            while(i<n && j>=0);
            
            if(i == n)
                f++;

            if(s<n-1)
                s++;
                
        }while(f<n);
        return v;
    }
};