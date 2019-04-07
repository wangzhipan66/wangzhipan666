#include <bits/stdc++.h>

using namespace std;
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date()
	{
	}
	Date(int year_,int month_,int day_)
	{
		year=year_;
		if(month_>=1&&month_<=12)
			month=month_;
		else
			month=1;
		day=day_;
	}
	void setYear(int year)
	{
		this->year=year;
	}
	void setMonth(int month)
	{
		this->month=month;
	}
	void setDay(int day)
	{
		this->day=day;
	}
	int getYear()
	{
		return year;
	}
	int getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
	void displayDate()
	{
		cout<<this->month<<"/"<<this->day<<"/"<<this->year<<endl;
	}
};
int main()
{
    Date date(2000,12,1);
    date.displayDate();
    return 0;
}
