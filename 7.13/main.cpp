#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20];
    int l=0;
    for(int i=0;i<20;i++)
    {
        int k,flag=1;
        cin>>k;
        for(int j=0;j<l;j++)
        {
            if(a[j]==k)
            {
                flag=0;
                break;
            }
        }
        if(k>=10&&k<=100&&flag==1)
            a[l++]=k;
    }
    for(int i=0;i<l;i++)
        cout<<a[i]<<endl;
    return 0;
}
