#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t[2][3];
    cout<<"有2行"<<endl;
    cout<<"有3列"<<endl;
    cout<<"有6个元素"<<endl;
    cout<<t[1][0]<<" "<<t[1][1]<<" "<<t[1][2]<<endl;
    cout<<t[0][2]<<" "<<t[1][2]<<endl;
    t[1][2]=0;
    t[2][3]={0,0,0,0,0,0};
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            t[i][j]=0;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>t[i][j];
    int mmin=t[0][0];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
        {
            if(t[i][j]<mmin)
                mmin=t[i][j];
        }

    return 0;
}
