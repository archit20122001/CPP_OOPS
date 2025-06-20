#include <iostream>
using namespace std;
int main()
{
  // Loops in c++
  // There are three types of loops in C++ :-
  // 1. For loop
  // 2. While loop
  // 3. Do While loop

//    For loops in C++
//    Syntax for For loop
//    for(initialization; condition; updation)
//    {
//      loop body(C++ code);
//    }

// example:

   // for (int i = 0 /*(initialization)*/; i <= 40 /*(condition)*/; i++ /*(updation)*/)
   // {
   //   cout << i << endl; /*(loop body)*/
   // }

   //  While loops in C++
   //  syntax for While loop
   //  while(condition)
   //  {
   //    C++ statements;
   //    updation;
   //  }

   // example:
   //    printing 1 to 40 using while loop.

   int i = 1;
   while (i <= 40) /*condition*/
   {
     cout << i << "\n"; /*statement*/
     i++;               /*updation*/
   }

    Do While loop in C++
    Syntax for Do While loop
    do
    {
      C++ statement;
    }
    while (condition)
      ;

example:
    Printing 1 to 40 using while loop

        int i = 1;
    do
    {
      cout << i << "\n";
      i++;
    } while (i <= 40);
}