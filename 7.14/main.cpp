#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<20;i++)
    {
        int k;
        cin>>k;
        if(k>=10&&k<=100&&count(v.begin(),v.end(),k)==0)
            v.push_back(k);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
