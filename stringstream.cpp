#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
    string str;
    getline (cin, str);
    stringstream ss(str);
    string s;
    while (ss >> s) {
        cout << s << endl;
    }
    ss.clear();
    return '0';
}
