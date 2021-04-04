#include <iostream>
#include <cstring>
using namespace std;
struct String
{
    int n;
    const char* str;
    String (const char* gstr)
    {
        str = new char[strlen(gstr)];
        str = gstr;
    }
    ~String()
    {
        delete[] str;
    }
    void print()
    {
        cout << str;
    }
    void append (const char* other)
    {
        char* tmp = new char [strlen(str) + strlen(other)];
        for (int i = 0; i<strlen(str) ; i++) tmp[i] = str[i];
        for (int i = strlen(str); i <= sizeof(tmp) ; i++) tmp[i] = other[i - strlen(str)];
        str = tmp;
    }
};
int main ()
{
    String s("Hi ");
    s.append("there");
    s.print();
    return 0;
}
