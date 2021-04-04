#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int *x = new int [5];
    int *y = new int [5];
    Point (int* _x, int* _y)
    {
        x = _x; y = _y;
    }
    void print()
    {
        for (int i = 0; i<5; i++) cout << *(x+i) << ' ';
        cout << '\n';
    }
};
int main ()
{
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    Point c(a, b);
    c.print();
    Point d = c;
    d.print();
    return 0;
}
