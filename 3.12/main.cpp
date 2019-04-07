#include <iostream>
#include <string>
using namespace std;

class Account
{
  private:
      int yue;


  public:
  Account(int yue_)
  {
      if(yue_>=0)
      {
          yue=yue_;
      }
      else
      {
          yue=0;
          cout<<"³õÊ¼Óà¶îÎÞÐ§"<<endl;
      }
  }
  void credit(int m)
  {
      yue=yue+m;
  }
  void debit(int m)
  {
      if(m<=yue)
      {
          yue=yue-m;
      }
      else
      {
          cout<<"Debit amount exceeded account balance"<<endl;
      }
  }
  int getBalance()
  {
      return yue;
  }
};
int main()
{
    Account a1(1000);
    Account a2(2000);
    a1.credit(500);
    cout<<a1.getBalance()<<endl;
    a2.debit(200);
    cout<<a2.getBalance()<<endl;
    return 0;
}
