#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print (vector <int > vec) { //vector as a parameter..
   for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
   cout << endl;
}
int main ()
{
   vector <int > vec;
   vec.push_back (1);
   vec.push_back (6);
   vec.push_back (3);
   vec.push_back (0);
   vec.push_back (5);
   print (vec); //vector as a argument..
   reverse (vec.begin(), vec.end()); print (vec); //reverse elements..
   sort (vec.begin(), vec.end()); print (vec); // sort elements..
   vector <int > :: iterator it; //iterator works as c pointer.. takes address from library functions (which returns address)
   for (it = vec.begin(); it != vec.end(); it++) { //iterator uses..
      cout << *it << " ";
   } cout << endl;

   return 0;
}
