#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
    Point (int _x = 0, int _y = 0) : x(_x),y(_y) {};
};
void print1 (Point p)
    {
        cout << &p << '\n';
    }
void print2 (Point& p)
    {
        cout << &p << '\n';
    }
int main ()
{
    Point a(1,2);
    cout << &a << '\n';
    print1(a);
    print2(a);
}
