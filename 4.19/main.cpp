#include <bits/stdc++.h>
using namespace std;
int main()
{    int counter=0,number;
  int largest=0,larger=0;
    while(counter<10)
        {        cin>>number;
    if(number>largest)
            {            larger=largest;
          largest=number;        }
    counter++;    }
      cout<<largest<<" "<<larger<<endl;
        return 0;}
