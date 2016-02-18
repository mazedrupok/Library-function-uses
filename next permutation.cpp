#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main ()
{
   vector <int > v;
   int i;
   for (i = 1; i < 8; i++) v.push_back(i);
   do {
      for (i = 0; i < 7; i++) cout << v[i] << " ";
      printf ("\n");
   } while (next_permutation(v.begin(), v.end()));
   return 0;
}
