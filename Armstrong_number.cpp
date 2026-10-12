#include <iostream>
using namespace std;

bool armStrongNumber(int n)
{
    // code here
    int sum = 0, num = n, x;

    for (int i = 0; i < 3; i++)
    {
        x = num % 10;
        sum = sum + (x * x * x);
        num /= 10;
    }
    if (sum == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << armStrongNumber(n);
}