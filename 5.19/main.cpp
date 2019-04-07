#include <bits/stdc++.h>
using namespace std;
double pai(double n)
{    double p=0;
for(int i=1;i<=n;i++)
{        if(i%2!=0)            p+=4/(2*(double)i-1);
else            p-=4/(2*(double)i-1);    }
return p;}
int main()
{    for(double i=1;i<=1000;i++)
{        cout<<"第"<<i<<"项近似值为: "<<pai(i)<<endl;    }
return 0;}
