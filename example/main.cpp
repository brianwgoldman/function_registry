// Author: Brian W Goldman
// The "main" of the example. This file knows nothing about
// "other.cpp" or "other2.cpp", in the sense that it
// never includes any files where they declare their functions,
// yet can call functions defined in those files.
// Any file that is linked during compile time and contains
// "REGISTER_FUNCTION" statements will add to the functions
// this file can call.
#include "header.h"

#include <iostream>
using namespace std;

int main() {
  // List out all functions registered in the "greeting_message" registry
  cout << "Greeting Message options: ";
  for (const auto p : function_registry::greeting_message_registry()) {
    cout << p.first << ", ";
  }
  cout << endl;

  // Have the user pick a function, then call it.
  string choice;
  cout << "Choice: ";
  cin >> choice;
  auto message = function_registry::call_greeting_message(choice);
  cout << "Message: " << message << endl << endl;

  // List out all functions registered in the "math_operation" registry
  cout << "Math method options: ";
  for (const auto p : function_registry::math_operation_registry()) {
    cout << p.first << ", ";
  }
  cout << endl;

  // Have the user pick a function, enter its arguments, and call it.
  cout << "Choice: ";
  cin >> choice;
  int x, y;
  cout << "Input x: ";
  cin >> x;
  cout << "Input y: ";
  cin >> y;
  auto result = function_registry::call_math_operation(choice, x, y);
  cout << "Result: " << result << endl;
  return 0;
}
