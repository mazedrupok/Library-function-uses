#include <iostream>
#include <cstdio>
#include <deque>
#include <algorithm>
#include <iterator> //uses for ostream_iterator..
using namespace std;
int main ()
{
   deque <int > intDeq;
   //freopen ("out.txt", "w", stdout);
   ostream_iterator <int > screen (cout, " ");
   intDeq.push_back(13);
   intDeq.push_back(75);
   intDeq.push_back(28);
   intDeq.push_back(35);
   copy (intDeq.begin(), intDeq.end(), screen);
   cout << endl;
   intDeq.push_front(0);
   intDeq.push_back (100);
   copy (intDeq.begin(), intDeq.end(), screen);
   cout << endl;
   intDeq.pop_front();
   intDeq.pop_front();
   copy (intDeq.begin(), intDeq.end(), screen);
   cout << endl;
   intDeq.pop_back();
   intDeq.pop_back();
   deque<int>::iterator deqIt;
   deqIt = intDeq.begin();
   ++deqIt; //deqIt points to the second element
   intDeq.insert(deqIt, 444);
   copy(intDeq.begin(), intDeq.end(), screen);
   cout << endl;
   return 0;
}
