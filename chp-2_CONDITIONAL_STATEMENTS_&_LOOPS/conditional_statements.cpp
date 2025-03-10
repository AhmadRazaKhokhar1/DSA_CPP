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
    return 0;
}
