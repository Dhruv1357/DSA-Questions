/*
Problem - Array insert at index
Platform - GeeksForGeeks
Summary - Insert the given element into the array at the given index.
*/


#include <iostream>
#include <vector>

using namespace std;

void insertAtIndex(vector<int> &arr, int index, int val)
{
    arr.push_back(arr[arr.size() - 1]);
    for (int i = arr.size() - 2; i >= index; i--)
    {
        if (i > index)
            arr[i] = arr[i - 1];
        if (i == index)
            arr[i] = val;
    }
    if (index == arr.size() - 1)
        arr[arr.size() - 1] = val;

        cout << "[";

        for(int i=0;i<arr.size();i++)
        {
            cout << arr[i];
        }
        
        cout << "]";
}

int main()
{
    vector<int> v;
    int size;
    cin >> size;

    int inp,index,val;

    for (int i = 0; i < size; i++)
    {
        cin >> inp;
        v.push_back(inp);
    }
    cin >> index >> val;
    insertAtIndex(v,index,val);

}