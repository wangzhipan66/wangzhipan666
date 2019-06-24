#include<bits/stdc++.h>
using namespace std;
int integerPower(int base, int exponent)
{
    int sum=base;
    for(int i=2;i<=exponent;i++)
    {
        sum=sum*base;
    }
    return sum;
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout<<integerPower(base,exponent)<<endl;
    return 0;
}
