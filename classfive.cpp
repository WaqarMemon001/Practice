#include <iostream>
#include <string>

//  <cmath> header
#include <cmath>

using namespace std;

int main() {

  // User input String ---

  cout << "User Input String" << endl;
  //   string fullName;
  //   cout << "enter Your Fullname";
  //   getline(cin, fullName);
  //   cout << fullName;

  // The max(x,y) function can be used to find the highest value of x and y:

  cout << "max() function max(5,10)" << max(5, 10) << "\n";

  // And the min(x,y) function can be used to find the lowest value of x and y:
  cout << "min() function min(5,10)" << min(5, 10) << "\n";

  // Other functions, such as sqrt (square root), round (rounds a number) and
  // log (natural logarithm), can be found in the <cmath> header file:

  cout << sqrt(64) << "\n";
  cout << round(2.6) << "\n";
  cout << log(2) << "\n";

  // A boolean variable is declared with the bool keyword and can only take the
  // values true or false:
  bool isCoding = true;
  bool isSleeping = false;

  cout << "IsCoding " << isCoding << " "
       << "IsSleeping "
       << " " << isCoding << "\n";

  // You can use a comparison operator, such as the greater than (>) operator,
  // to find out if an expression (or variable) is true or false:

  int x = 10;
  int y = 9;
  cout << (x > y) << "\n"; // returns 1 (true), because 10 is higher than 9

  // if else

  int time = 15;
  if (time < 18) {
    cout << "Good day." << endl;
  } else {
    cout << "Good evening." << endl;
  }

  // Else If

  int hour = 22;
  if (hour < 10) {
    cout << "Good morning." << endl;
  } else if (hour < 20) {
    cout << "Good day." << endl;
  } else {
    cout << "Good evening. " << endl;
  }

  // Outputs "Good evening."

  // Short Hand If... Else(Ternary Operator)
  // There is also a short-hand if else, which is known as the ternary
  // operator because it consists of three operands. It can be used to
  // replace multiple lines of code with a single line. It is often used to
  // replace simple if else statements:

  //  syntax
  //   variable = (condition) ? expressionTrue : expressionFalse;

  int numberForCheck = 13;

  string result =
      (numberForCheck = 15) ? "Condition is true" : "Condition is False";
  cout << result << "\n";

  // C++ Switch Statements
  // Use the switch statement to select one of many code blocks to be executed.

  // switch(expression) {
  //   case x:
  //     // code block
  //     break;
  //   case y:
  //     // code block
  //     break;
  //   default:
  //     // code block
  // }

  int numberOfTheDay = 1;

  switch (numberOfTheDay) {
  case 1:
    cout << "Monday "
         << "\n";
    break;
  case 2:
    cout << "tuesday "
         << "\n";
    break;
  case 3:
    cout << "wednesday "
         << "\n";
    break;
  case 4:
    cout << "thursday "
         << "\n";
    break;
  case 5:
    cout << "Friday "
         << "\n";
    break;
  case 6:
    cout << "Saturday "
         << "\n";
    break;
  case 7:
    cout << "Sunday "
         << "\n";
    break;
  default:
    cout << "your answer is incorrect!"
         << "\n";
  };

  return 0;
}
