#include <bits/stdc++.h>

using namespace std;

double jiecheng(int n){    int m=1;

while(n>0)    {        m=m*n;

n--;    }    return m;}

int main(){    int n;

double e=0;

cout<<"请输入您要累加求和的相数：";

cin>>n;

for(int i=0;i<n;i++)    {        if(i==0)            e=e+1;

else            e=e+1/jiecheng(i);    }    cout<<e<<endl;

return 0;}

