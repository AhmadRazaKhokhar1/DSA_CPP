#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    /*
1. Print an upside down triangle or an upside down pyramid of "*".
*/
    // Solution:
    int n1 = 5;
    int i = 1;
    cout << "1. upside down triangle or pyramid of *: \n\n";
    while (i <= n1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << " ";
            j++;
        }
        int k = n1;
        while (k >= 1)
        {
            if (k > i)
            {
                cout << " *";
            }
            else
            {
                cout << " ";
            }
            k--;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    /*
2. Print a box or square of "*".
*/
    // Solution:
    int n2 = 5;
    int i2 = 1;
    cout << "2. square of *: \n\n";
    while (i2 <= n1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << " ";
            int k = 1;
            while (k <= j)
            {
                if (k >= j)
                {
                    cout << "*";
                }
                k++;
            }
            j++;
        }
        cout << endl;
        i2++;
    }
    cout << endl;

    /*
3. Print triangle or pyramid of "*".
*/
    // Solution:
    int n3 = 5;
    int i3 = 1;
    cout << "3. triangle or pyramid of *: \n\n";
    while (i3 <= n3)
    {
     int k = n3;
        while (k >= 1)
        {
           if(k<i3){
            cout << "*";
           }else{
            cout << " ";
           }
            k--;
        }
        int j = 1;
        while (j <= i3)
        {
           
           cout << "*";
            j++;
        }
        cout << endl;
        i3++;
    }

    cout << endl;

    /*
4. Print a rectangle of "*".
*/
    // Solution:
    int n4 = 5;
    int i4 = 1;
    cout << "4. rectangle of *: \n\n";
    while (i4 <= n4)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i4++;
    }
     cout << endl;
    return 0;
}