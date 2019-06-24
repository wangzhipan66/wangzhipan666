#include<bits/stdc++.h>
using namespace std;
class Rectangle{
private:
    double x0,y0;
    double x1,y1;
public:
    Rectangle(double x0_,double y0_,double x1_,double y1_)
    {
        if(x0_>0.0&&x0_<20.0&&y1_>0.0&&y1_<20.0)
        {
            if(x1_>0.0&&x1_<20.0&&y1_>0.0&&y1_<20.0)
            {
                if(x0_!=x1_&&y0_!=y1_)
                {
                    x0=x0_;
                    x1=x1_;
                    y0=y0_;
                    y1=y1_;
                }
            }
        }
    }
    double primeter()
    {
        return abs(x1-x0)+abs(y1-y0);
    }
    double area()
    {
        return abs(x1-x0)*abs(y1-y0);
    }
    double getLength()
    {
        if(abs(x1-x0)>=abs(y1-y0))
            return abs(x1-x0);
        else
            return abs(y1-y0);
    }
    double getWidth()
    {
         if(abs(x1-x0)<=abs(y1-y0))
            return abs(x1-x0);
        else
            return abs(y1-y0);
    }
    bool square()
    {
        if(abs(x1-x0)==abs(y1-y0))
            return true;
        else
            return false;
    }
};
int main()
{

    return 0;
}
