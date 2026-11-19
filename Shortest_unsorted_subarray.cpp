#include <iostream>
using namespace std;

class Solution {
  public:
    int shortestUnorderedSubarray(vector<int>& arr) 
    {
        int asc=0,des=0;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i] > arr[i-1])
                asc++;
            else if(arr[i] < arr[i-1])
                des++;
            if(asc>0 && des>0)
                return 3;
        }
        return 0;
    }
};