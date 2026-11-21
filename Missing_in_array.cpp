#include <iostream>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) 
    {
        int size = arr.size()+1;
        for(int i=1;i<=size;i++)
        {
            arr.push_back(i);
        }
        
        for(int i=0;i<arr.size()-1;i++)
        {
            arr[i+1] = arr[i+1] ^ arr[i];
        }
        return arr[arr.size()-1];
    }
};