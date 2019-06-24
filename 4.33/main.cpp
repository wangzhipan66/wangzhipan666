#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;

    cin>>a>>b>>c;

    if(a+b>c&&a+c>b&&b+c>a)

        printf("可以表示三角形的三条边");

    else

        printf("不可以表示三角形的三条边");

    return 0;
}
