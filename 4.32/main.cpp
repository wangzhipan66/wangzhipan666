#include <bits/stdc++.h>
using namespace std;
int main()
{    int a,b,c;
  cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
            cout<<"可以构成直角三角形"<<endl;
    else        cout<<"不可以构成直角三角形"<<endl;
      return 0;}
