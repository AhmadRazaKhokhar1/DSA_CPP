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

   /* Logical Operators*/
   /*
   Logical Operators are:
   1. OR is represented by ||
   ->  OR returns true if any statement from LHS or RHS is true.
      OR returns false if both statements from LHS or RHS are false.

   2. AND is represented by &&
   ->   AND returns true if both statements from LHS and RHS are true.
      AND returns false if any statement from LHS or RHS is false.

   3. NOT is represented by !
   ->   NOT returns opposite of the given statement.
        If true is given, it will be converted to false and if
        false is give then, the true will be returned.

        These logical operators are used the most in any programming language.
   */

   int input1, input2;
   cout << "Press Enter and give two numbers (0 and 1 would be best example to compare): "; // this is a simple input prompt, the actual input will be taken from the user by the program.  // the user input will be stored in the variable "input" of type int.  // this program will stop executing after taking the input.  // the user will have to press enter after entering the input.  // in the next line, the program will start executing again.  // the input will be
   cin >> input1 >> input2;
   cout << "(input1 && input2) AND: " << (input1 && input2) << endl;
   cout << "(input1 || input2) OR: " << (input1 || input2) << endl;
   cout << " (!input1) NOT: " << (!input1) << endl;

   /*Unary Operators*/
   /*
   Unary Operators are used as shorthand for increament and decrement
   For exmaple:
   */
   int c = 0;

   cout << "c++ =>" << c++ << endl; // this will add 1 into c but the result will not be updated immediately. (post increment) the slot for result will be first created then the result will be calculated and stored in it.
   cout << "++c =>" << ++c << endl; // this will not only add 1 into prev result of c but will also return the updated result too. (pre increment) the result will be calculated first and then the slot for result will be created in the memory with updated value/result.
   cout << "c-- =>" << c-- << endl; // similar goes with -- operator, where this one will subtract the value but the result will not be updated. (post decrement)
   cout << "--c =>" << --c << endl; // but this one will subtract one from c and then immediately return the udpated result. (pre decrement)

   return 0;
}