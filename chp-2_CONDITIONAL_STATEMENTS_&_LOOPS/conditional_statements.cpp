#include <iostream>
using namespace std;

int main()
{
    /* This example shows us the usecase for if and else-if statements in a very
    simple and easy way. The code speaks itself. Imagine that we are making a voting
    software that collects votes from a valid user. First we will take input from the
    user and then we will check if he is eligible for the voting for not.
     */
    int age;
    cout << "Plase Enter your age\n";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible for voting.\n";
    }
    else if (age < 0)
    {
        cout << "Please enter a valid age.\n";
    }
    else
    {
        cout << "You are not eligible for the voting.\n";
    }

    /*
    In the following example we will follow another example to check if the given
    char by a user is a lowercase letter or an uppercase letter.age
    NOTE: Keep in mind that the condition for checking a or z must be wrapped inside
    single quotes, e.g 'a'. Otherwise an error for string will be thrown because the
    double quote will convert the letter "a" into a string (const char*) instead of char.
    In this example we will recall the usage of ASCII
    */
    char character;
    cout << "Please give any letter between a-z or A-Z";
    cin >> character;
    if (character >= (char)'a' && character <= (char)'z')
    {
        cout << "The given character is a valid lowercase letter.\n";
    }
    else if (character >= (char)'A' && character <= (char)'Z')
    {
        cout << "The given character is valid uppercase letter.\n";
    }
    else
    {
        cout << "Please enter a valid letter!\n";
    }

    // In this example we will check wether the given input is a postive or a negative
    //    ineteger.
    // NOTE: characters (a-z or A-Z) will also be considered in the condition as per ASCII
    // We discussed before.
    int number;
    cout << "Please enter a positive or negative number:\n";
    cin >> number;
    if (number < 0)
    {
        cout << "The given number is negative integer\n";
    }
    else if (number >= 0)
    {
        cout << "The given number is a positive integer\n";
    }
    else
    {
        cout << "Please enter a valid integer value!\n";
    }

    /*
    Ternary Operators:
    This is another way of implementing if and else-if conditional statements.
    In this example we will check if the value of given integer is greater than hundred
    or not.
    */

    // 1. if-else
    int _value;
    cout << "Please enter a number between 0 to n\n";
    cin >> _value;
    _value > 100 ? cout << "The given number is greater than 100\n" : cout << "The given number is less than 100\n";

    // 2. else-if
    cout
        << "Please enter a value between 0 to n\n";
    int _value2;
    cin >> _value2;
    _value2 > 100 ? cout << "The given number is greater than 100\n" : _value2 == 100 ? cout << "The value is exactly 100\n"
                                                                   : _value2 < 0      ? cout << "The given value is incorrect\n"
                                                                                      : cout << "The given number is less than 100\n";

    // I hope that this was a clear example to understand the short-hand if-else statements.
    return 0;
}
