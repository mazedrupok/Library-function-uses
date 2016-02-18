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
   set <string > name;
   name.insert ("mazed");
   name.insert ("rupok");
   name.insert ("mzd");
   name.insert ("rpk");
   name.insert ("rok");
   set <string > :: iterator it;
   for (it = name.begin(); it != name.end(); it++) {
      cout << *it << endl;
   }
   if (name.find ("mazed") == name.end()) {
      cout << "mazed is found" << endl;
   }
   else cout << "mazed isnt found" << endl;
   return 0;
}
