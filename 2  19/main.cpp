#include <iostream>
using namespace std;
int main()
{
  cout<<"Input three different integers: ";
  int a,b,c;
  cin >>a>>b>>c;
  cout<<"Sum is "<<a+b+c<<endl;
  cout<<"Average is "<<(a+b+c)/3<<endl;
  cout<<"Product is "<<a*b*c<<endl;
  int m;
  m=max(a,b);

  int n;
  n=max(m,c);

  int w;
  w=min(a,b);

  int x;
  x=min(w,c);

  cout <<"Smallest is "<<x<<endl;

  cout <<"Largest is "<<n<<endl;

    return 0;

}
