#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<"is large";
    }
    else if(a==b)
    {
        cout<<"There numbers are equal";
    }
    else
    {
        cout<<b<<"is large";
    }
    return 0;
}
