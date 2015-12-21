// Author: Brian W Goldman
// This file adds more functions to the greeting registry
#include "header.h"
// Another function for the "greeting_message" registry
REGISTER_FUNCTION(greeting_message, other, [](){ return "Other 2 says hi!"; })
// If you uncomment out this line, you will get an exception as "standard"
// is already defined elsewhere.
//REGISTER_FUNCTION(greeting_message, standard, []() { return "Uh Oh."; })
