#include <bits/stdc++.h>
using namespace std;
int main(){    int n,mmin=32000;
cin>>n;
for(int i=0;i<n;i++)    {        int k;
cin>>k;
if(k<mmin)            mmin=k;
}    cout<<mmin<<endl;
return 0;}
