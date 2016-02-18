#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
   vector <int > vec;
   vector <int > :: iterator it;
   vec.push_back (1);
   vec.push_back (2);
   vec.push_back (3);
   vec.push_back (4);
   vec.push_back (5);
   cout << vec.at (3) << endl; // return the element at the position specified by index 3..
   cout << vec[3] << endl;  //Same as previous..
   cout << vec.front() << endl; //return first element of the container..
   cout << vec.back () << endl; //return last element of the container..
   it = vec.begin(); it += 2;
   vec.erase(it);    //erase the element specified by the position (iterator)..
   //vec.erase (vec.begin(), vec.end()); //deletes all elements of a vector..
   vec.insert(it, 10, 5); //insert element specified by the position (iterator).. last argument means element value..
   for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
   cout << endl;
   cout << vec.size() << endl;
   vector.clear(); //delete all elements of a vector..
   cout << vec.size() << endl;
   return 0;
}
