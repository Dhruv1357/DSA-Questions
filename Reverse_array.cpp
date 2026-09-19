#include <iostream>
using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) 
    {
        int temp;
        
        for(int i=0;i<arr.size()/2;i++)
        {
            temp = arr[i];
            arr[i] = arr[arr.size() - i - 1];
            arr[arr.size() - i - 1] = temp;
        }
    }
};