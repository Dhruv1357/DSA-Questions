#include <iostream>
using namespace std;
class Solution {
  public:
    bool canFormPalindrome(string &s) 
    {
        // code here
        int countOdd = 0;
        unordered_map<char,int>um;
        
        for(int i=0;i<s.size();i++)
        {
            um[s[i]]++;
        }

        for(auto ch : um)
        {
            if(ch.second%2 != 0)
                countOdd++;
        }

        if(s.size()%2 == 0)
        {
            if(countOdd != 0)
                return false;
        }
        else
        {
            if(countOdd != 1)
                return false;
        }
        return true;
    }
};