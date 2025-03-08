#include <iostream>
using namespace std;

int main()
{

    // primitive data types
    int age = 24 * 8;                            // int is used for numbers btw -n to 0  and 0 to n, full numbers not in deciaml
    char gender = 'M';                           // char can only store a single character value must be wrapped in single quotes
    string fullName = "Ahmad Raza Khokhar";      // string is used to store multiple characters and the value is wrapped inside double quotes
    float decimal = 0.345f;                      // float is used to store decimal values "f" or "F" is must at the the end of the value to make it decimal else c++ will treat it as double
    bool isTrue = false;                         // bool is used to store true or false values, true is 1 and false is 0
    double largeNumber = 2312312.89827938217931; // double is used to store large floaing numbers

    // cout << isTrue << "\n"; // return 0 to represent false

    // Type Conversions in c++
    // cout << largeNumber << endl;

    // converting from double to int (big to small)
    int newNumber = (int)largeNumber; // convert to type int which will remove everything after "."
    cout << newNumber << endl;

    // conversion from int to double (small to big)
    double newDecimal = (double)age; // convert to type double which will add everything after "."
    cout << newDecimal << endl;

    // converting string into ASCII
    int val_of_char = gender;
    cout << val_of_char << endl; // it will return ASCII value of 'M' which is 77

    /* Taking Input from the User */

    float total;
    cout << "Please enter your total";
    cin >> total;
    cout << "Your total is " << total << "\n";

    return 0;
}

// int/float takes 4 bytes in the computer's memory, 8 bits make 1 byte. Which means that "int"  takes 32 bits of spaces.
// char takes 1 byte in the computer's memory (8 bits of space)
// bool takes 1 byte in the computer's memory (8 bits of space)
// string takes 24 bytes in the computer's memory (192 bits of space)
// double takes 8 bytes in the computer's memory (64 bits of space)

/*
semi colon is important in C++

in memory, the characters is store in ASCII (American Standard Code of Information Interchange)
charactres like "A, B, C, D, E, F, G, H, I" or "a, b, c, d, e" are never stored as they are.

Every char has a pre-defined ASCII value. For example, A has an ASCII value of 65, B has 66 and so on...
Similary for lowercase letters, a has an ASCII value of 97, b has 98 and so on..
*/