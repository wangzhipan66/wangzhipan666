#include<bits/stdc++.h>
using namespace std;
int main()
{
    //a)
    char alphabet[24]={'a','b','c','d','e','f','g'};
    cout<<alphabet[6]<<endl;
    //b)
    double grades[5];
    cin>>grades[5];
    //c)
    int values[5];
    for(int i=0;i<5;i++)
        values[i]=8;
    //d)
    double temperatures[100];
    for(int i=0;i<100;i++)
        temperatures[i]=i;
    double sum=0;
    for(int i=0;i<100;i++)
        sum+=temperatures[i];
    cout<<sum<<endl;
    //e)
    double a[11],b[34];
    for(int i=0;i<11;i++)
        b[i]=a[i];
    //f)
    double w[99];
    double mmax=mmin=w[0];
    for(int i=0;i<99;i++)
    {
        if(w[i]>mmax)
            mmax=w[i];
        if(w[i]<mmin)
            mmin=w[i];
    }
    return 0;
}
