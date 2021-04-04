#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
    Point (int _x = 0, int _y = 0) : x(_x),y(_y) {};
    void print ()
    {
        cout << '(' << x << ',' << y << ')';
    }
};
int main ()
{
    Point a(1,2);
    a.print();
}
