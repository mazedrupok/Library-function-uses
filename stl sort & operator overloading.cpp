#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct data {
   char name[10];
   int height, weight;
   int income;
   /*bool operator < (const data& b)const {
      if (income == b.income) {
         if (height == b.height)
            return strlen(name) < strlen (b.name);
         else return height > b.height;
      }else return income > b.income;
   }*/
};
bool compare (data a, data b) {
   if (a.income == b.income) {
      if (a.height == b.height) {
         if (a.weight == b.weight) {
            return strlen (a.name) < strlen (b.name);
         }else return a.weight < b.weight;
      }else return a.height > b.height;
   }else return a.income > b.income;
}
int main ()
{
   data num[5];
   int i, j, k;
   //freopen ("chacha.txt", "r", stdin);
   for (i = 0;  i < 5; i++) {
      scanf (" %s", num[i].name);
      scanf (" %d %d %d" , &num[i].height, &num[i].weight, &num[i].income);
   }
   sort (num, num+5, compare);
   for (i = 0;  i < 5; i++) {
      printf ("%s:", num[i].name);
      printf (" %d %d %d\n" , num[i].height, num[i].weight, num[i].income);
   }
   return 0;
}
