#include <bits/stdc++.h>

using namespace std;
class Employee
{
private:
    string fname; //名
    string lname; //姓
    int money;
public:
    Employee()
    {
    }
    Employee(string fname,string lname,int money)
    {
        this->fname=fname;
        this->lname=lname;
        this->money=money;
    }
    void setFname(string fname)
    {
		this->fname=fname;
    }

    void setLname(string lname)
    {
		this->lname=lname;
    }

    void setMoney(int money)
    {
		this->money=money;
    }

    string getFname()
    {
		return fname;
    }

    string getLname()
    {
		return lname;
    }

    int getMoney()
    {
		return money;
    }

};
int main()
{
    Employee ply1("三","张",3000);
    Employee ply2("四","李",4000);
    cout<<ply1.getLname()<<ply1.getFname()<<":"<<ply1.getMoney()<<endl;
    cout<<ply2.getLname()<<ply2.getFname()<<":"<<ply2.getMoney()<<endl;
	ply1.setMoney(ply1.getMoney()+ply1.getMoney()*0.1);
	ply2.setMoney(ply2.getMoney()+ply2.getMoney()*0.1);
	cout<<ply1.getLname()<<ply1.getFname()<<":"<<ply1.getMoney()<<endl;
    cout<<ply2.getLname()<<ply2.getFname()<<":"<<ply2.getMoney()<<endl;
    return 0;
}
