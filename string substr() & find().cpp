#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    string s, t;
    s = "We love Bangladesh very much";
    t = s.substr (3, 4);
    cout << t << endl;
    t = s.substr (4);
    cout << t << endl;
    int pos = s.find ("very"); // if not find , it returns -1.
    cout << pos <<endl;
    t = s.substr (pos);
    cout << t << endl;
    return 0;
}
