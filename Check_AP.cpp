/*
Problem - Check Arithmetic Progression
Platform - GeeksForGeeks
Summary - Check if the given array is in Arithmetic Progression or not
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
  public:

    bool checkIsAP(vector<int> &arr) 
    {
        sort(arr.begin(),arr.end());
        int d = arr[1] - arr[0];

        for(int i =1;i<arr.size();i++)
        {
            if((arr[i] - arr[i-1]) != d)return false;
        }

        return true;
    }
};