/*
Problem - Euilibrium Point
Platform - Geeks for Geeks
Summary - Finding a point where the sum of the elements on the left is equal to the sum of elements on the right side.
*/

#include <vector>
#include <iostream>
using namespace std;

int findEquilibrium(vector<int> &arr)
{
    int totalSum = 0, lsum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        totalSum += arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        lsum += arr[i];
        totalSum -= arr[i];

        if (lsum == (totalSum - arr[i + 1]))
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int>v;
    int size,push;

    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>push;
        
        v.push_back(push);
    }
   
    int res = findEquilibrium(v);

    cout<<res;
}