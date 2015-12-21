// Author: Brian W Goldman
// This file defines a normal function, then adds it to a function registry.
#include "header.h"

string standard_greeting() {
  return "Hello from the standard greeting!";
}
// The REGISTER_FUNCTION Macro takes three arguments:
// * The registry you want to add to.
// * The name you want to give your function
// * The function you want to add
// This call adds the above defined "standard_greeting" to the
// "greeting_message" registry with the lookup name "standard"
REGISTER_FUNCTION(greeting_message, standard, standard_greeting)
// This function adds a lambda to "math_operation"s with name "multiply"
REGISTER_FUNCTION(math_operation, multiply, [](int x, int y){ return x * y; })
// This function adds a lambda to "math_operation"s with name "add"
REGISTER_FUNCTION(math_operation, add, [](int x, int y){ return x + y; })
