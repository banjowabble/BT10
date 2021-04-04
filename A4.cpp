#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
    Point (int _x = 0, int _y = 0) : x(_x),y(_y) {};
};
void print_value (Point p)
    {
        cout << "Dia chi value:\n"
             << &p << '\n'
             << &p.x << '\n'
             << &p.y << '\n';
    }
void print_reference (Point& p)
    {
        cout << "Dia chi reference:\n"
             << &p << '\n'
             << &p.x << '\n'
             << &p.y << '\n';
    }
int main ()
{
    Point a(1,2);
    cout << "Dia chi:\n"
         << &a << '\n'
         << &a.x << '\n'
         << &a.y << '\n';
    print_value(a);
    print_reference(a);
}
