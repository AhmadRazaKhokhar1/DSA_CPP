#include <iostream>
using namespace std;

int main()
{
    /*
1. Print a triangle or pyramid of "*".
*/
    // Solution:
    int n1 = 5;
    int i = 1;
    int k = 1;
    int j = n1;
    while (i <= n1)
    {
        while (j >= i)
        {
            cout << "*";

            j--;
            cout << "\n";
        }
        i++;
    }
    return 0;
}