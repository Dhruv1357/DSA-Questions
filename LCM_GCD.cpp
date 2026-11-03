/*
Problem - LCM and GCD
Platform - GeeksForGeeks
Summary - Finding the LCM and GCD of two given numbers
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> lcmAndGcd(int a, int b) {

        int small,large,gcd = 0,lcm;
        vector<int> v;
        
        if(a>b)
        {
            large = a;
            small = b;
        }
        else
        {
            large = b;
            small = a;
        }
       
        for(int i = 1;;i++)
        {
            if((large * i)%small == 0)
            {
                v.push_back(large*i);
                break;
            }
        }
        

        for(int i=1;i<=small;i++)
        {

            if((a%i) ==0 && (b%i) == 0)
            {
                gcd = i;
            }
        }
        
        v.push_back(gcd);
        
        return v;
    }

    int main()
    {
        int num1,num2;

        cin >> num1 >> num2;

        vector<int>v = lcmAndGcd(num1,num2);

        cout << v[0] << " " << v[1];
    }