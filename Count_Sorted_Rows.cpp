#include <iostream>
using namespace std;

class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) 
    {
        int incCount,decCount,count = 0;

        for(int i=0;i<N;i++)
        {
            incCount = 0,decCount = 0;
            
            for(int j=1;j<M;j++)
            {
                if(Mat[i][j-1] < Mat[i][j])
                    incCount++;
                else if(Mat[i][j-1] > Mat[i][j])
                    decCount++;
            }
            if((incCount == M-1) || (decCount == M-1))count++;
        }
        return count;
    }
};