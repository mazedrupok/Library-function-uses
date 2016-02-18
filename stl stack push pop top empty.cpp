#include <cstdio>
#include <iostream>
#include <stack>
#include <algorithm>
#include <iterator>
using namespace std;
int main ()
{
   stack <int > intStack;
   intStack.push(16);
   intStack.push(8);
   intStack.push(20);
   intStack.push(3);
   while (!intStack.empty()) {
      cout << intStack.top() << " ";
      intStack.pop();
   }
   cout << endl;

   return 0;
}
