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
   vector <int > vec, vc;
   vec.push_back (1); vc.push_back(10);
   vec.push_back (6); vc.push_back (20);
   vec.push_back (3); vc.push_back (30);
   vec.push_back (0); vc.push_back (40);
   vec.push_back (5);
   print (vec); print (vc);
   vec.swap (vc);
   print (vec); print (vc);
   return 0;
}
