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

    // Prime Numbers
    /*
    Prime numbers are those which are only divisible by themselves or by 1.
    The rest numbers are called Non-Prime numbers.
    */
    bool isPrime = true;
    int _val = 7;
    for (int i = 2; i <= (_val - 1); i++)
    {
        if (_val % i == 0)
        {
            isPrime = false;
            break; // as soon as the isPrime gets false, we can use break here to save extra itreations
        }
    };
    isPrime ? (cout << _val << " is a prime number\n") : (cout << _val << " is a non-prime number\n");

    /*
    The above approach to identify a prime number was quite awesome but we can go one step ahead
    in terms of optimization to save time complexity for the loop. In the above example, we did
    everything right to tell whether the number is prime or not by checking the condition of
    i <= n -1 which means that we are ignoring first and the last integer because they are always
    returning 0 in n % i meaning if both of these are skipped and still the result is zero, it means
    that the given number is not a prime number, this approach is good but there is a more optimized way
    of acheiving this.

    If check an example of finding the non-prime numbers

    Let us say, n = 12.
    Now the factors will be as follows:

    1 x 12 = 12;
    2 x 6 = 12;
    3 x 4 = 12;
    4 x 3 = 12;
    6 x 2 = 12;
    12 x 1 = 12;

    we know that the factors from left and right side of 'x' are repeating at some point. like 1 x 12 and 12 x 1 since
    we are focused to find the falsy of the prime number, so we are ignoring the first and last n and n-1 values from the
    condition which means that 1 x 12 and 12 x 1 are ignored. Now keep in mind that wherever the factors are repeating
    just after, it means that is not a prime number too. If we see above, 3 x 4 and 4 x 3 are the points where the values
    are repeating on left and right as factors. so we can simple run the loop until that particular condition is met.
    Now the main point, how check whether the factors are repeating or not? Well since we have ignore the first and last
    values already which were repeating, it means that half the way of factors, if any of factors repeat, we have met the
    condition more quickly and saved some time.
    So in order to get the repeating factors like in this case 3 and 4, we have square root of the n which is 12 in this case
    if look closely sqrt of 12 is 3.4641  if we apply i <= sqrt of 12; then loop will surely stop at the repeating point of the
    value i becaues 3.4641 is <= 3 and 4. The loop will definitely stop its iterations when i == 3;

    If we further break it down.
    We kow that i <= sqrt of n is a non-prime number

    we can also say that square of i and square of (sqrt of n), which will be equal to
    square of i = n;

    So lets dive into the actual implementation of this hope that you've understood till here.
    */

    int numberFromUser;
    cout << "Please enter a number\n";
    cin >> numberFromUser;
    bool _isPrime = true;
    for (int j = 2; (j * j) <= numberFromUser; j++)
    {
        if (numberFromUser % j == 0)
        {
            cout << "exited the loop where j = " << j << endl;
            _isPrime = false;
            break; // exit the as the divisor has been found.
        }
    };
    _isPrime ? (cout << numberFromUser << " is a prime number from user\n") : (cout << numberFromUser << " is a non-prime number from user\n");

    return 0;
}