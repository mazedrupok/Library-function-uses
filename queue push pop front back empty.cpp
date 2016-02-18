#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
int main ()
{
   queue <int > intQueue;
   intQueue.push(26);
   intQueue.push(18);
   intQueue.push(50);
   intQueue.push(33);
   while (!intQueue.empty()) {
      cout << intQueue.front() << " ";
      intQueue.pop();
   }
   cout << endl;
   cout << intQueue.back() << endl;
   return 0;
}
