#include<bits/stdc++.h>
using namespace std;
double inline circleArea(int r)
{
    return r*r*3.14;
}
int main()
{
    int r;
    cout<<"请输入圆的半径：";
    cin>>r;
    cout<<"圆的面积为："<<circleArea(r)<<endl;
    return 0;
}
