#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
   int arr[] = {1, 2, 3, 4, 10, 44, 5, 0};
   vector <int > vec (arr, arr+8); //initializing vector with an array..
   for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
   cout << endl;
   vec.push_back (2);
   vec.push_back (7);
   vec.clear (); //delete all elements of a vector..
   cout << vec.capacity() << endl; //as it initialize with an array sized 8.. so capacity is 8..
   cout << vec.max_size() << endl; //return the maximum size of a vector container..
   cout << vec.empty () << endl; //return true if vector is empty..
   return 0;
}
