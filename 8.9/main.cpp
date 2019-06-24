#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int value1=200000,value2;

    long int *longPtr=&value1;

    cout<<*longPtr<<endl;

    value2=*longPtr;

    cout<<value2<<endl;

    cout<<&value1<<endl;

    cout<<longPtr<<endl;

    return 0;
}

