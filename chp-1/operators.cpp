#include <iostream>
using namespace std;

int main()
{
    /*Arithmetic Operators*/
    int a = 5, b = 3; // we can delcare multiple variables in one line
    int sum = a + b;
    int product = a * b;
    int division = a / b;
    int remainder = a % b;
    cout << "Sum: " << sum << "\n";
    cout << "Product: " << product << "\n";
    cout << "Division: " << division << "\n";
    cout << "Remainder: " << remainder << "\n";

    cout << (10 * 5) << " This is another way to calculate product of 10 and 5\n";

    // It is important to understand the fixed logic of the language

    /*
    C++ converts the type of variables' output based on the size or precision it has.
    For example, if you give a double to an int, the output will be converted to int and it will ignore all the values after or decimals
    that come after the decimal point '.'
    */

    // The following convresion is based on the type of container the result is stored in.
    int y = (0.5768768 * 8);
    // The output will be coverted into "int" which means all the decimal values will be ignored.
    // Keep in mind that c++ only ignores the values that comes after the decinal point. Like math we do, it does not rounds off the values.
    double z = (0.5768768 * 8); // The output will be onverted into "double" which means that the result will be a large floating number
    cout << " y= " << y << endl;
    cout << " z= " << z << endl;

    // Direct type conversion
    cout << (int(2) * double(2.87678)) << "direct conversion\n"; // in this example, the double will be given an advantage because of large in size and precision.

    /*Relational Operators*/
    /*
    Relational  Operators return either true or false in the form of "1" or "0".
    As we discussed before C++ converts the boolean values into binary integers.
    */
    int p = 7, o = 5;

    cout << "p<o --> " << (p < o) << endl;
    cout << "p>o --> " << (p > o) << endl;
    cout << "p<=o --> " << (p <= o) << endl;
    cout << "p>=o --> " << (p >= o) << endl;
    cout << "p!=o --> " << (p != o) << endl;
    cout << "p==o --> " << (p == o) << endl;
    return 0;
}