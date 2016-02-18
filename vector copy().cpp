#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print (vector <int > vec) { //vector as a parameter..
   vector <int > :: iterator it;
   for (it = vec.begin(); it != vec.end(); it++) cout << *it << " ";
   cout << endl;
}
int main ()
{
   vector <int > vec (10); //to use copy, vector size must be initialized..
   int arr[] = {2, 5, 1, 6, 7, 0, 3, 11};

   copy(arr+2, arr+8, vec.begin());//arguments should be noticed..

   print (vec);
   return 0;
}
