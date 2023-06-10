#include <iostream>
using namespace std;

int main() {

  // C++ While Loop The while loop loops through
  // a block of code as long as a specified condition is true :

  int smallNum = 1;
  while (smallNum <= 5) {
    cout << smallNum << "\n";
    smallNum++;
  };

  // Note: Do not forget to increase the variable used in the condition,
  // otherwise the loop will never end!

  // The Do/While Loop
  // The do / while loop is a variant of the while loop.This loop will execute
  // the code block once,
  // before checking if the condition is true,
  // then it will rep / eat the loop as long as the condition is true.

  // The example below uses a do/while loop. The loop will always be executed at
  // least once, even if the condition is false, because the code block is
  // executed before the condition is tested:

  int userAge = 1;

  do {
    cout << userAge << "\n";
    userAge++;
  } while (userAge <= 2);

  //   When you know exactly how many times you want to loop through a block of
  //   code, use the for loop instead of a while loop:

  for (int i = 0; i <= 5; i++) {
    cout << i;
  };

  for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
  };

  // Nested Loops
  // It is also possible to place a loop inside another loop. This is called a
  // nested loop.
  // The "inner loop" will be executed one time for each iteration of the "outer
  // loop":

  for (int i = 0; i < 5; ++i) { // outerloop

    cout << "Outer " << i << "\n";

    for (int j = 0; j <= 3; ++j) { // inner loop
      cout << "Inner " << j << "\n";
    }
  };

  // The following example outputs all elements in an array,
  // using a "for-each loop":
  // Example

  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  };

  return 0;
}
