#include <bits/stdc++.h>
using namespace std;
int jiecheng(int n)
{    int m=1;
  while(n>0)    {        m=m*n;
      n--;    }    return m;}
      int main(){    for(int i=1;i<=5;i++)    {        cout<<i<<"�Ľ׳�Ϊ��"<<jiecheng(i)<<endl;    }
        return 0;}
