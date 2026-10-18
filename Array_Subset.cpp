/*
Problem - Array Subset
Platform - GeeksForGeeks
Summary - Given two arrays finding if one array is the subset of another.
*/

#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) 
    {
        unordered_map<int,int>um1;
        unordered_map<int,int>um2;
        
        for(int i=0;i<a.size();i++)
        {
            um1[a[i]]++;
        }
        for(int i=0;i<b.size();i++)
        {
            um2[b[i]]++;
        }
       
        for(int i=0;i<b.size();i++)
        {
            if(um1[b[i]] < um2[b[i]])
                return false;
        }
        return true;
    }
};