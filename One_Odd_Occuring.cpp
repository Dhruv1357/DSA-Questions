#include <iostream>
using namespace std;

class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) 
    {

        for(int i=1;i<arr.size();i++)
        {
            arr[0] = arr[0] ^ arr[i];
        }
        
        return arr[0];
    }
};