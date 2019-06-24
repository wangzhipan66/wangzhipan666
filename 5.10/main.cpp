#include<bits/stdc++.h>
using namespace std;
int jiecheng(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*jiecheng(n-1);
}
int main()
{
    cout<<"    1    2    3    4    5"<<endl;
    for(int n=1;n<=5;n++)
        cout<<"    "<<jiecheng(n);
    return 0;
}
