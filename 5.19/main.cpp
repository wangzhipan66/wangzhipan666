#include<bits/stdc++.h>
using namespace std;
double pai(int n)
{
    double p=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            p-=4/(2*(double)i-1);
        else
            p+=4/(2*(double)i-1);
    }
    return p;
}
int main()
{
    for(int n=1;n<=1000;n++)
    {
        cout<<n<<":"<<pai(n)<<endl;
    }
    return 0;
}
