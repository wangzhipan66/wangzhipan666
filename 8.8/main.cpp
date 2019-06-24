#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int values[SIZE]={2,4,6,8,10};

    unsigned int a;

    unsigned int *vPtr=&a;

    for(int i=0;i<SIZE;i++)

        cout<<values[i]<<endl;

    vPtr=values;

    vPtr=&values[0];

    for(;*vPtr>=2&&*vPtr<=10;vPtr++)

        cout<<*vPtr<<endl;

    return 0;
}
