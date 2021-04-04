#include <bits/stdc++.h>
using namespace std;
struct Point
{
    double x, y;
    Point (double _x = 0, double _y = 0) : x(_x),y(_y) {};
};
Point mid_point (const Point& a, const Point& b)
{
    Point c(double((a.x + b.x)/2), double((a.y + b.y)/2));
    return c;
}
void print (const Point& p)
    {
        cout << '(' << p.x << ',' << p.y << ')';
    }
int main ()
{
    Point a(1,2), b(2,3);
    Point c = mid_point (a, b);
    print (c);
}
