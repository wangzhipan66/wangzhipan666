#include<bits/stdc++.h>

using namespace std;

void zero(long int *bigIntegers);

int add1AndSum(int *oneTooSmall);

int main()
{
    return 0;
}
int add1AndSum(int *oneTooSmall)
{
    int sum=0;

    for(int i=0;i<oneTooSmall.size();i++)

        sum+=oneTooSmall[i];

    return sum;
}
