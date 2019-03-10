// Fig. 2.1: fig02_01.cpp
// Text-printing program.
#include <iostream> // allows program to perform input and output

using namespace std;

int main()
{
    int r = 0;
    int d = 0;
    int c = 0;
    int s = 0;

    cout << "输入圆的半径：";
    cin >> r;

    d = 2 * r;
    c = 2 * 3.14159 * r;
    s = 3.14159 * r * r;

    cout << "直径= " << d <<endl;
    cout << "周长= " << c <<endl;
    cout << "面积= " << s << endl;

    return 0;
}
