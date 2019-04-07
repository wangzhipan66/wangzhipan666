#include <bits/stdc++.h>

using namespace std;

double jiecheng(int n){    int m=1;

while(n>0)    {        m=m*n;

n--;    }    return m;}

int main(){    int x,n;

double ex=0;

cout<<"请输入x：";

cin>>x;

cout<<"请输入累加求和的项数：";
cin>>n;

for(int i=0;i<n;i++)    {        if(i==0)            ex=ex+1;

else            ex=ex+pow(x,i)/jiecheng(i);    }    cout<<ex<<endl;

return 0;}
