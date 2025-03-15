#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
In this chapter we will understand the use-case of loops in C++
 */

    // for loop
    /*
    for loop is one of the most used loops in any programming langugage. The syntax of the
    for loop consists of an integer declration as the first argument of the loop parantheses
    and the second argument is the condition on the basis of which, the  loop runs. until
    the given confition is true, the loop executes the given commands within its block scope.
    An finally the third argument is for updating the loop variable after each iteration.
    */
    int arr[5] = {1, 2, 3, 4, 5}; // This is a static array declaration with a size of 5 elements;
    for (int i = 0; i < 5; i++)
    {
        cout << "for loop number is: " << arr[i] << "\n";
    };

    string *arr2 = new string[3]; // This is a dynamic array and following are their values with respect to their indexes.
    arr2[0] = "and I love coding\n";
    arr2[1] = "I am a software engineer\n";
    arr2[2] = "Hi my name is Ahmad Raza Khokhar\n";
    // reverse for loop
    for (int j = 2; j >= 0; j--)
    {
        cout << arr2[j] << "\n";
    };
    delete[] arr2; // delete the dynamic array from memory after getting the result.
    // while loop
    /*
    While loop checks for the given condition first, until the condition is true,
    the loop will execute and perform the given command. As the condition gets
    false, the loop will exit;
    */

    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 0;
    while (a < 10)
    {
        cout << "while loop number is: " << arr3[a] << "\n";
        a++;
    };
    int n = 5;
    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        cout << "sum val while in progress: " << sum << "\n";
        sum += i;
        i++;
    };
    cout << "final val of sum in while loop is: " << sum << endl;
    // do-while loop
    /*
    do-while loop first runs the given command and then checks the given conidition and keeps on
    executing the given instructions until the conditions gets false.
    */
    int b = 0;
    do
    {
        cout << "do while loop number is:" << b << "\n";
        b++;
    } while (b <= 10);

    /*
    In the following example we will calculate the sum of all the even and odd numbers till the value of "n".
    */
    int even_sum = 0;
    int odd_sum = 0;
    int _n = 50;
    int z = 1;
    do
    {
        int isEven = z % 2;
        (isEven == 0) ? (cout << z << " is an even number\n") : (cout << z << " is an odd number\n");
        (isEven == 0) ? even_sum += z : odd_sum += z;
        z++;
    } while (z <= _n);

    cout << "The final even sum from do while is: " << even_sum << endl;
    cout << "The final odd sum from do while is: " << odd_sum << endl;

    /*
    we can exit from any loop at any time with the term 'break;'. Lets have a look at an example
    to understand it:
    */

    int _n1 = 50000; // some extra value that we don't need anyway
    int _z = 1;
    do
    {
        cout << "The value of z = " << _z << endl;
        _z++;
        if (_z >= 10)
        {
            cout << "The value of z = " << _z << endl;
            break; // exits out of the loop as the _z == 10
        }
    } while (_z <= _n1);

    return 0;
}