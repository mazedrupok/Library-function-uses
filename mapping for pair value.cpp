#include <bits/stdc++.h>
using namespace std;
int main ()
{
    map < pair<int, int>, int> mp;
    int as = 0;
    mp[make_pair(1,3)] = 1;
    mp[make_pair(4,3)] = 1;
    mp[make_pair(7,2)] = 1;
    mp[make_pair(1,4)] = 1;
    if (mp.find(make_pair(7,3)) == mp.end())
        cout << "NOT FOUND\n";
    else cout << "FOUND\n";
    return 0;
}
