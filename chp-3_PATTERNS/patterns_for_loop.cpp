#include <iostream>
using namespace std;

int main()
{
   // Creating patterns is a fun way to practice your C++ skills
   /*
   Patterns may look like a shape of square, triangle, diamond, etc.,
   Let us cover these by the usage of loops and nested-loops. If we
   insert a loop inside another loop, this phenomenon is called as
   nested-loops.
    */

   /*
    1. Print a square that takes n number of value which is responsible to print a square of n
   number of lines and each line should have 1 to n values.
     */
   // Solution:
   cout << "1. square pattern:\n\n";
   int n1 = 4;
   for (int i = 1; i <= n1; i++)
   { // this outer loop shall print each line and put an endl to it

      for (int j = 1; j <= n1; j++)
      {
         cout << j;
      }

      cout << endl;
   }
   cout << endl;
   /*
   2. Print a right-angled triangle or half pyramid of * until n is reached. The * shall start from 1 and will continue to
   increase line after line until the n is reached.
   */
   // Solution:
   cout << "2. right angled triangle pattern:\n\n";
   int n2 = 5;
   for (int i = 1; i <= n2; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   cout << endl;
   /*
   3. Print an inverted triangle or inverted pyramid of "*".
   */
   // Solution:
   cout << "3. inverted triangle pattern:\n\n";
   int n3 = 5;
   int k = n3;
   for (int i = 1; i <= n3; i++)
   {

      for (int j = 1; j <= n3; j++)
      {

         if (j >= k)
         {
            cout << " ";
         }
         else
         {
            cout << "* ";
         }
      }
      k--;
      cout << endl;
   }
   cout << endl;
   /*
    4. Print an upside down triangle or upside down pyramid of "*".
    */
   // Solution:
   cout << "4. upside down triangle or upside down pyramid pattern:\n\n";
   int n4 = 5;
   int k2 = n4;
   for (int i = 1; i <= n4; i++)
   {
      for (int j = 1; j <= n4; j++)
      {

         if (j >= i)
         {
            cout << " *";
         }
         else
         {
            cout << " ";
         }
      }
      k2--;
      cout << endl;
   }
   cout << endl;

   /*
 5. Print an triangle or pyramid of "*".
 */
   // Solution:
   cout << "5. triangle or payramid pattern:\n\n";
   int n5 = 5;
   for (int i = 1; i <= n5; i++)
   {

      for (int k = n5; k >= 1; k--)
      {
         if (k > i)
         {
            cout << " ";
         }
         else
         {
            cout << " *";
         }
      }
      for (int j = 1; j <= i; j++)
      {
         cout << " ";
      }
      cout << "\n";
   }
   return 0;
}