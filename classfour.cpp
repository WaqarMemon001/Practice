#include <iostream>
#include <ostream>
#include <string>
using namespace std;

// C++ out put

/* int main() {
  //   single  Line Output

  cout << "Hello World!";
  cout << "this is C++ programing! ";

  // line break with cout
  cout << "this is line breake outpt \n Line break with backslash \n ";

  // Another way to insert a new line, is with the endl manipulator:

  cout << "another way to brea line with endl" << endl;
  cout << "endl \n";

  // Both \n and endl are used to break lines. However, \n is most used.

  // But what is \n exactly?
  // The newline character (\n) is called an escape sequence, and it forces the
  // cursor to change its position to the beginning of the next line on the
  // screen. This results in a new line.

  // Examples of other valid escape sequences are:

  //  1 \t	Creates a horizontal tab
  cout << "hERE IS tab space using \t backslash ad t \n";

  // 2 \\	Inserts a backslash character (\)
  cout << "hERE IS tab \\ space using \n";

  // 3 \"	Inserts a double quote character
  cout << "Insert a double quote in cout with \"backslash used in efore and
after\" . \n" ;


  return 0;
} */

// Variables are containers for storing data values.

// In C++, there are different types of variables (defined with different
// keywords), for example:

// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or
// -19.99 char - stores single characters, such as 'a' or 'B'. Char values are
// surrounded by single quotes string - stores text, such as "Hello World".
// String values are surrounded by double quotes bool - stores values with two
// states: true or false

/* int main() {

 // type variableName = value;

//
//  Where type is one of C++ types (such as int), and variableName is the name
of
//  the variable (such as x or myName). The equal sign is used to assign values
to
//  the variable.

//  To create a variable that should store a number, look at the following
//  example:

int myNum = 15;
cout << myNum << endl;

//   You can also declare a variable without assigning the value, and assign
//   the value later:

int secNum;
secNum = 20;
cout << secNum << endl;

int myNewNum = 5;         // Integer (whole number without decimals)
double myFloatNum = 5.99; // Floating point number (with decimals)
char myLetter = 'D';      // Character
string myText = "Hello";  // String (text)
bool myBoolean = true;    // Boolean (true or false)

//
// The cout object is used together with the << operator to display variables.
// To combine both text and a variable, separate them with the << operator:
//

int myAge;
myAge = 30;
cout << "I'm " << myAge << " Years Old! \n";

// Add Variables Together
// To add a variable to another variable, you can use the + operator:

int numOne = 4;
int numTwo = 9;
int sum = numOne + numTwo;

cout << sum << endl;

// Declare Multiple variables of same type

int x = 5, y = 6, z = 50;
cout << x + y + z;

// One Value to Multiple Variables
// You can also assign the same value to multiple variables in one line:

int a, b, c;
a = b = c = 50;
cout << a + b + c << endl;

//The general rules for naming variables are:

// Names can contain letters, digits and underscores
// Names must begin with a letter or an underscore (_)
// Names are case sensitive (myVar and myvar are different variables)
// Names cannot contain whitespaces or special characters like !, #, %, etc.
// Reserved words (like C++ keywords, such as int) cannot be used as names

//   Constants When you do not want others(or yourself) to change existing
//   variable values, use the const keyword(this will declare the variable as
//   "constant", which means unchangeable and read - only)

const int constant = 20;

// User Input
// You have already learned that cout is used to output (print) values. Now we
// will use cin to get user input.

// cin is a predefined variable that reads data from the keyboard with the
// extraction operator (>>).

// In the following example, the user can input a number, which is stored in
// the variable x. Then we print the value of x:

//   int age;
//   cout << "Enter your age";
//   cin >> age;
//   cout << "your age is " << age << endl;

// Creating a Simple Calculator
// In this example, the user must input two numbers. Then we print the sum by
// calculating (adding) the two numbers:

//  int addNumOne, addNumtwo;
//  cout << "add your first Number for sum \n";
//  cin >> addNumOne;
//  cout << "add your Second Number for sum \n";
//  cin >> addNumtwo;

//  int totalSum = addNumOne + addNumtwo;

//  cout << "total sum is " << totalSum << endl;

// As explained in the Variables chapter, a variable in C++ must be a
// specified data type:

int NumberInteger = 5;     // Integer (whole number)
float myFloat = 5.99;      // Floating point number
double myDoubleNum = 9.98; // Floating point number
char mychar = 'D';         // Character
bool Boolean = true;       // Boolean
string myName = "Waqar";   // String

// float vs. double

// The precision of a floating point value indicates how many digits the value
// can have after the decimal point. The precision of float is only six or seven
// decimal digits, while double variables have a precision of about 15 digits.
// Therefore it is safer to use double for most calculations.

// A floating point number can also be a scientific number with an "e" to
// indicate the power of 10:

float f1 = 35e3;
double d1 = 12E4;
cout << f1 << endl;
cout << d1 << endl;

// Boolean Types
// A boolean data type is declared with the bool keyword and can only take the
// values true or false.
//  When the value is returned, true = 1 and false = 0.

bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun << endl; // Outputs 1 (true)
cout << isFishTasty << endl; // Outputs 0 (false)

// Character Types
// The char data type is used to store a single character. The character must
// be surrounded by single quotes, like 'A' or 'c':

char myGrade = 'B';
cout << myGrade;

// Alternatively, you can use ASCII values to display certain characters:

// Example
char t = 65, u = 66, v = 67;
cout << t << endl;
cout << u << endl;
cout << v << endl;

string greeting = "Hello";
cout << greeting << endl;

//   To use strings, you must include an additional header file in the source
//   code, the<string> library :
//  Example: Include the string library  #include <string>

return 0;
}*/

// Operators

// C++ divides the operators into the following groups:

// Arithmetic operators
// Assignment operators
// Comparison operators
// Logical operators
// Bitwise operators

/*

Arithmetic Operators
Arithmetic operators are used to perform common mathematical operations.

Operator	Name	        Description	Example:
+	        Addition    	Adds together two values x + y -
Subtraction	    Subtracts one value from another	        x - y *
Multiplication	Multiplies two values	                    x * y /
Division	    Divides one value by another	            x / y %
Modulus      	Returns the division remainder	            x % y
++	        Increment	    Increases the value of a variable by 1
++x
--	        Decrement	    Decreases the value of a variable by 1
--x
*/

// Assignment Operators
// Assignment operators are used to assign values to variables.
// In the example below, we use the assignment operator (=) to assign the value
// 10 to a variable called x

/*

A list of all assignment operators:

Operator	    Example 	Same As
=	            x = 5	    x = 5
+=	            x += 3	    x = x + 3
-=	            x -= 3  	x = x - 3
*=          	x *= 3	    x = x * 3
/=	            x /= 3	    x = x / 3
%=	            x %= 3  	x = x % 3
&=	            x &= 3	    x = x & 3
|=          	x |= 3	    x = x | 3
^=	            x ^= 3	    x = x ^ 3
>>=	            x >>= 3	    x = x >> 3
<<=	            x <<= 3	    x = x << 3

*/

/*

Comparison Operators
Comparison operators are used to compare two values (or variables). This is
important in programming, because it helps us to find answers and make
decisions.

The return value of a comparison is either 1 or 0, which means true (1) or false
(0). These values are known as Boolean values, and you will learn more about
them in the Booleans and If..Else chapter.

In the following example, we use the greater than operator (>) to find out if 5
is greater than 3:

*/

/*

Operator	    Name	                        Example
==	            Equal to	                    x == y
!=	            Not equal	                    x != y
>	            Greater than	                x > y
<	            Less than	                    x < y
>=	            Greater than or equal to    	x >= y
<=	            Less than or equal to	        x <= y

*/

/*

Logical Operators
As with comparison operators, you can also test for true (1) or false (0) values
with logical operators.

Logical operators are used to determine the logic between variables or values:

Operator     Name	          Description Example

&& 	        Logical and	      Returns true if both statements are true
(x < 5 && x < 10)
||        	Logical or        Returns true if one of the statements is true
(x < 5 || x < 4) !	        Logical not       Returns false if the result is
true            !(x < 5 && x < 10)

*/

int main() {

  // Strings
  // Strings are used for storing text.

  // A string variable contains a collection of characters surrounded by double
  // quotes:

  //   string greeting = "Hello";

  //   string firstName = "John ";
  //   string lastName = "Doe";
  //   string fullName = firstName + lastName;
  //   cout << fullName;

  // In the example above, we added a space after firstName to create a space
  // between John and Doe on output. However, you could also add a space with
  // quotes (" " or ' '):

  //   string firstName = "John";
  //   string lastName = "Doe";
  //   string fullName = firstName + " " + lastName;
  //   cout << fullName;

  //   Append
  // A string in C++ is actually an object, which contain functions that can
  // perform certain operations on strings. For example, you can also
  // concatenate strings with the append() function:

  string firstName = "Waqar ";
  string lastname = "Ali";
  string fullName = firstName.append(lastname);
  cout << fullName << endl;

  // C++ uses the + operator for both addition and concatenation.
  // Numbers are added. Strings are concatenated.

  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length() << endl;

  string txt_two = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: \n" << txt_two.size() << endl;

  // Tip: You might see some C++ programs that use the size() function to get
  // the length of a string. This is just an alias of length(). It is completely
  // up to you if you want to use length() or size():

  // Access Strings
  // You can access the characters in a string by referring to its index number
  // inside square brackets [].

  // This example prints the first character in myString:

  string myStringOne = "Hello";
  cout << myStringOne[0] << endl;
  // Outputs H

  // Change String Characters
  // To change the value of a specific character in a string, refer to the index
  // number, and use single quotes:

  string myString_twi = "Hello";
  myString_twi[0] = 'J';
  cout << myString_twi << endl;
  // Outputs Jello instead of Hello

  // string txtForSpecial = "We are the so-called "Vikings" from the north.";

  // The solution to avoid this problem, is to use the backslash escape
  // character.

  // The backslash (\) escape character turns special characters into string
  // characters:

  // Escape character	Result	Description
  // \'	'	Single quote
  // \"	"	Double quote
  // \\	\	Backslash
  // The sequence \"  inserts a double quote in a string:

  // Example
  string txtForSpecial_twi = "We are the so-called \\Vikings\\ from the north.";

  cout << txtForSpecial_twi << endl;

  // User Input Strings
  // It is possible to use the extraction operator >> on cin to display a string
  // entered by a user:

  // However, cin considers a space (whitespace, tabs, etc) as a terminating
  // character, which means that it can only display a single word (even if you
  // type many words):

  string firstName_cin;
  cout << "Type your first name: \n";
  cin >> firstName_cin; // get user input from the keyboard
  cout << "Your name is: " << firstName_cin;

  return 0;
}