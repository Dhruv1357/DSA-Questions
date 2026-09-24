#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> arr;
    unordered_map<long,int> um;
    um[0] = 0;
    long sum = 0,max = 0;
    arr.push_back(4);
    arr.push_back(-3);
    arr.push_back(-1);
    arr.push_back(2);
    arr.push_back(-2);

    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];

        if(um.find(sum) != um.end())
        {
            if((i+1-um[sum]) > max)
            {
                max = i+1-um[sum];
            }
        }
        else
        {
            um[sum] = i+1;
        }
    }
    cout<<max;
}